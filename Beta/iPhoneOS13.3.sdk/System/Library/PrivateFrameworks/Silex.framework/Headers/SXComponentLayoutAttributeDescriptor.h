/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentDependencyDescriptor.h>

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor

{
    _Bool _ignoreMargins;
    int _fromLayoutAttribute;
    int _toLayoutAttribute;
}

@property (nonatomic) int fromLayoutAttribute;
@property (nonatomic) int toLayoutAttribute;
@property (nonatomic) _Bool ignoreMargins;

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(_Bool)arg3;

- (id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(_Bool)arg3;

@end
