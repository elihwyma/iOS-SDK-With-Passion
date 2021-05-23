/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SUControlAppearance : NSObject

{
    NSMutableDictionary *_images;
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_titlePositions;
}

@property (nonatomic, readonly) long long numberOfImages;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)textAttributesForState:(unsigned long long)arg1;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)styleBarButtonItem:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)enumerateImagesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTextAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (id)imageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)_copyKeyForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)enumerateTitlePositionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)styleButton:(id)arg1;

@end
