//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTCoreModelCategoryPairing, NSArray, NSDictionary;

@interface AVTCoreModelCategory : NSObject
{
    NSArray *_colorPalettes;
    NSArray *_presets;
    NSDictionary _tags;
    NSArray *_rows;
    long long _presetCategory;
    AVTCoreModelCategoryPairing *_pairing;
}

@property(readonly, copy, nonatomic) AVTCoreModelCategoryPairing *pairing; // @synthesize pairing=_pairing;
@property(readonly, nonatomic) long long presetCategory; // @synthesize presetCategory=_presetCategory;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, copy, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(readonly, nonatomic) NSArray *colorPalettes; // @synthesize colorPalettes=_colorPalettes;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPresetCategory:(long long)arg1 colorPalettes:(id)arg2 presets:(id)arg3 tags:(NSDictionary )arg4 rows:(id)arg5 pairing:(id)arg6;

@end

