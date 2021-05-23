/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMethodSignature, NSString;

@interface SGStringPreprocessingTransformer : NSObject

{
    NSArray *_methodNames;
    NSArray *_methodValues;
    NSMethodSignature *_methodSignatureNoValue;
    NSMethodSignature *_methodSignatureWithValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withMethods:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)transform:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithMethods:(id)arg1;
- (id)transformBatch:(id)arg1;
- (SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2;
- (void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4;
- (_Bool)isEqualToStringPreprocessingTransformer:(id)arg1;

@end
