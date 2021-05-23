/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreModelCategoryPairing, NSArray, NSDictionary;

@interface AVTCoreModelCategory : NSObject

{
    NSArray *_colorPalettes;
    NSArray *_presets;
    struct NSDictionary *_tags;
    NSArray *_rows;
    long long _presetCategory;
    AVTCoreModelCategoryPairing *_pairing;
}

@property (nonatomic, readonly) NSArray *colorPalettes;
@property (copy, nonatomic, readonly) NSArray *presets;
@property (copy, nonatomic, readonly) NSDictionary *tags;
@property (copy, nonatomic, readonly) NSArray *rows;
@property (nonatomic, readonly) long long presetCategory;
@property (copy, nonatomic, readonly) AVTCoreModelCategoryPairing *pairing;

- (id)description;
- (id)initWithPresetCategory:(long long)arg1 colorPalettes:(id)arg2 presets:(id)arg3 tags:(struct NSDictionary *)arg4 rows:(id)arg5 pairing:(id)arg6;

@end
