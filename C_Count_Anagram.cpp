int search(const string &pat, const string &txt) {
    int pat_len = pat.length();
    int txt_len = txt.length();
    if (pat_len > txt_len) return 0;

    vector<int> pat_freq(26, 0), window_freq(26, 0);
    for (char c : pat) {
        pat_freq[c - 'a']++;
    }
    for (int i = 0; i < pat_len; i++) {
        window_freq[txt[i] - 'a']++;
    }
    int anagram_count = 0;

    for (int i = pat_len; i <= txt_len; i++) {
        if (pat_freq == window_freq) {
            anagram_count++;
        }

        if (i < txt_len) {
            window_freq[txt[i] - 'a']++;
            window_freq[txt[i - pat_len] - 'a']--;
    }
    return anagram_count;
}
