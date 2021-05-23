/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCorrection : NSObject

{
    unsigned int _tokenID;
    double _score;
    unsigned long long _errorType;
}

@property (readonly) unsigned int tokenID;
@property (readonly) double score;
@property (readonly) unsigned long long errorType;

- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2 errorType:(unsigned long long)arg3;

@end
