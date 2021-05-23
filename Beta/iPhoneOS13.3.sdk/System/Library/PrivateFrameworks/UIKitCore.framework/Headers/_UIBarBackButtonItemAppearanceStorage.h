/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject

{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;

- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)anyBackgroundImage;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;

@end
