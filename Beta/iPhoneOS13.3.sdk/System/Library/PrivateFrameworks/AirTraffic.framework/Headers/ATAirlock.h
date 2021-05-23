/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString;

@interface ATAirlock : NSObject

{
    NSFileManager *_fm;
    NSString *_basePath;
}

+ (id)sharedInstance;

- (id)init;
- (void)createAirlockForDataclasses:(id)arg1;
- (void)evacuateDataclasses:(id)arg1;
- (void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2;
- (void)copyAssetToAirlock:(id)arg1;
- (void)processCompletedAsset:(id)arg1;
- (id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2;
- (id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2;
- (id)lyricsPathForDataclass:(id)arg1 lyricsIdentifier:(id)arg2;
- (id)pathForDataclass:(id)arg1;
- (id)pathForAsset:(id)arg1 withDataclass:(id)arg2;
- (void)evacuate;

@end
