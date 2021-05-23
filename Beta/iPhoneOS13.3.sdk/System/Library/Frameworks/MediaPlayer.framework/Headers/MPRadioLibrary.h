/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject

{
    MPRadioController *_radioController;
}

@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) unsigned long long stationCount;
@property (nonatomic, readonly) NSArray *stations;

+ (id)defaultRadioLibrary;

- (id)init;
- (void)dealloc;
- (void)getRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)stationWithIdentifier:(long long)arg1;
- (void)addStationBasedOnTrackIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_radioAvailabilityDidChangeNotification:(id)arg1;
- (void)_radioRecentStationsDidChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (id)_radioModel;

@end
