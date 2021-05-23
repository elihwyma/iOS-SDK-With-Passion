/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class SXTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor

{
    SXTextExclusionPath *_resultingExclusionPath;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (retain, nonatomic) SXTextExclusionPath *resultingExclusionPath;

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(_Bool)arg3 withRange:(struct _NSRange)arg4;

@end
