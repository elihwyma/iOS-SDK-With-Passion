/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <Swift>

{
    long long _style;
    long long _legibilityStyle;
    UIColor *_foregroundColor;
    NSNumber *_overrideHeight;
    double _foregroundAlpha;
}

@property (retain, nonatomic, readonly) NSNumber *overrideHeight;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long legibilityStyle;
@property (retain, nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) double foregroundAlpha;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isLegacy;
- (_Bool)isTranslucent;
- (_Bool)isDoubleHeight;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3;
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5;

@end
