/**
 * @file level_tree_tokenizer.h
 */

#ifndef _LEVEL_TREE_TOKENIZER_H_
#define _LEVEL_TREE_TOKENIZER_H_

#include "document.h"
#include "parse_tree.h"
#include "tokenizer.h"

/**
 * Tokenizes parse trees based on their levels.
 */
class LevelTreeTokenizer : public Tokenizer
{
    public:
        /**
         *
         */
        void tokenize(const string & filename, Document & document, unordered_map<string, size_t>* docFreq) const;
};

#endif
