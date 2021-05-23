/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OKProducerPreset : NSObject

{
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (id)init;
- (void)dealloc;
- (id)localizedName;
- (id)uniqueIdentifier;
- (id)pluginIdentifier;
- (id)family;
- (_Bool)isAvailable;
- (id)backgroundColor;
- (_Bool)isLocal;
- (_Bool)isDefault;
- (id)audioURLs;
- (id)guidelines;
- (_Bool)supportsSettingType:(unsigned long long)arg1;
- (id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3;
- (id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2;
- (id)_settingKeyForType:(unsigned long long)arg1;

@end
