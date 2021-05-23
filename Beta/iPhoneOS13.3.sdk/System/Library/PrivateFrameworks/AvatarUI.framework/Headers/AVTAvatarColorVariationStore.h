/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject

{
    NSMutableDictionary *_colorPresets;
}

@property (nonatomic, readonly) NSMutableDictionary *colorPresets;

- (id)init;
- (void)resetValues;
- (id)colorVariationFromColor:(id)arg1;
- (void)saveColorPreset:(id)arg1 forColor:(id)arg2;
- (id)colorPresetFromColor:(id)arg1;
- (id)keyForColor:(id)arg1;

@end
