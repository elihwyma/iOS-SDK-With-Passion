/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject

{
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    _Bool _legacyDontHighlight;
    _Bool _legacySuppressOptionsBackground;
    _Bool _isTiled;
    unsigned long long _leftCapWidth;
    unsigned long long _rightCapWidth;
}

- (id)init;
- (id)textAttributesForState:(unsigned long long)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2 noFallback:(_Bool)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2 withFallback:(_Bool)arg3;
- (id)anyDividerImageForMini:(_Bool)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3 withFallback:(_Bool)arg4;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(_Bool)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(_Bool)arg4;
- (void)takeTextAttributesFrom:(CDStruct_0ba2c6ed)arg1 forState:(unsigned long long)arg2;
- (_Bool)wantsTrackingSuppressed;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2;
- (id)anyDividerImage;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (_Bool)legacySuppressOptionsBackground;
- (void)setDetail:(CDStruct_41b0f204 *)arg1;
- (void)setIsTiled:(_Bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;

@end
