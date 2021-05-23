/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCompletion : NSObject

{
    unsigned int _tokenID;
    double _score;
}

@property (readonly) unsigned int tokenID;
@property (readonly) double score;

- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;

@end
