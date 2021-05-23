/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@interface CCSModulePresentationOptions : NSObject

{
    _Bool _animatePresentation;
    _Bool _animateDismissal;
    _Bool _blurBackground;
}

@property (nonatomic, readonly) _Bool animateDismissal;
@property (nonatomic, readonly) _Bool animatePresentation;
@property (nonatomic, readonly) _Bool blurBackground;

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;
+ (id)defaultExpandedOptions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlurBackground:(_Bool)arg1 animatePresentation:(_Bool)arg2 animateDismissal:(_Bool)arg3;

@end
