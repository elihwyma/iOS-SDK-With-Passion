/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject

{
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
    const struct IOMappings *_ioMappings;
    int _outputPermutation[5];
}

- (id)init;
- (id)initWithLanguageID:(id)arg1;
- (id)_identifyOwnedTokenSequences:(id)arg1;
- (id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(struct RKEventIdentifierRange *)arg3;
- (void)resetEventIdentifierModel;
- (id)identifyStrings:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)identifyMessage:(id)arg1;

@end
