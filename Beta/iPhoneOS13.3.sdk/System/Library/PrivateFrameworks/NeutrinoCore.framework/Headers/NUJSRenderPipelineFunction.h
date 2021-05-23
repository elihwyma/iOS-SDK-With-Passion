/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderPipelineFunction.h>

@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction

{
    NSDictionary *_params;
    NSString *_source;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)initWithParameters:(id)arg1 source:(id)arg2;
- (_Bool)isEqualToFunction:(id)arg1;

@end
