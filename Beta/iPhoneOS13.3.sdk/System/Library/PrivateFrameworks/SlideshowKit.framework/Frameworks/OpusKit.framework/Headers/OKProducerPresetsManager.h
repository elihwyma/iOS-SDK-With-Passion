/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject

{
    NSMutableDictionary *_presetsByFamily;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)presetForUniqueIdentifier:(id)arg1;
- (id)presetsForFamily:(id)arg1;
- (id)defaultPresetsForFamily:(id)arg1;
- (id)_presetsByNameForFamily:(id)arg1;
- (id)_defaultPresetsByName;
- (id)presetWithUniqueIdentifier:(id)arg1;
- (id)defaultPresets;

@end
