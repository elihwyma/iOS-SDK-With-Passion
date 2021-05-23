/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SGPipelineTransformer : NSObject

{
    NSArray *_transformers;
}

@property (retain) NSArray *transformers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withTransformers:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)transform:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;
- (id)initWithTransformers:(id)arg1;
- (_Bool)isEqualToPipelineTransformer:(id)arg1;

@end
