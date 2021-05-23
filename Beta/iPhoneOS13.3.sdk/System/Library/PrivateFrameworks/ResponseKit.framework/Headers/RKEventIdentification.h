/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface RKEventIdentification : NSObject

{
    NSArray *_tokenSequences;
    float *_probabilities;
}

@property (nonatomic, readonly) NSArray *tokenSequences;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float *)arg2;
- (void)getTopKClassifications:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateClassifiedTokens:(CDUnknownBlockType)arg1;
- (void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (CDStruct_cd0cafa4)topClassification;

@end
