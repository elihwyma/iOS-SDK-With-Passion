/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSLayoutConstraint.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UISystemBaselineConstraint : NSLayoutConstraint <Swift>

{
    NSNumber *_spacingMultiplier;
}

@property (retain, nonatomic) NSNumber *spacingMultiplier;

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
