/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class VCUserDefaults;

@interface VCShortcutsAssetUpdater : NSObject

{
    VCUserDefaults *_defaults;
}

@property (nonatomic, readonly) VCUserDefaults *defaults;

+ (_Bool)updateAsset;
+ (void)scheduleAssetUpdate;

- (id)init;
- (_Bool)updateAsset;
- (_Bool)downloadAsset:(id)arg1;
- (id)fetchLatestAsset;
- (_Bool)downloadAssetCatalog;
- (_Bool)updateVoiceShortcutsBlacklistWithAsset:(id)arg1;

@end
