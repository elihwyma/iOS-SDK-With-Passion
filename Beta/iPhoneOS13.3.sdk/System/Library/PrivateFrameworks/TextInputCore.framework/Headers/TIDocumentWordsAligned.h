/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

{
    NSMutableArray *_inDocumentWordsStack;
    NSMutableDictionary *_leftContextToWordMap;
}

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (id)init;
- (id)description;
- (id)lastWord;
- (void)pushWordToDocument:(id)arg1;
- (void)addToContextMap:(id)arg1;
- (void)removeFromContextMap:(id)arg1;
- (id)wordsForContext:(id)arg1;
- (void)insertWord:(id)arg1 atIndex:(long long)arg2;
- (id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3;
- (_Bool)deleteWordsUptoContext:(id)arg1;
- (unsigned long long)wordsCount;

@end
