/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject

{
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)_boolForKey:(id)arg1;
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)greenTeaMusicIsMirroringStreamingSettings;
- (void)setGreenTeaMusicIsMirroringStreamingSettings:(_Bool)arg1;
- (_Bool)greenTeaMusicAllowCellularForStreaming;
- (void)setGreenTeaMusicAllowCellularForStreaming:(_Bool)arg1;
- (_Bool)greenTeaMusicAllowCellularForHighQualityStreaming;
- (void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(_Bool)arg1;

@end
