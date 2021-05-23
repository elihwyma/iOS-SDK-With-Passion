/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

{
    NSDictionary *_trackedBagKeys;
}

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)init;
- (void)_updateKeys:(id)arg1;
- (_Bool)_amsBagBoolValueForKey:(id)arg1;
- (void)_setIsNowPlayingEnabled:(_Bool)arg1;
- (void)_setIsSportsEnabled:(_Bool)arg1;
- (void)_updateBoolValueForTrackedKey:(id)arg1;
- (void)updateTrackedBagValues;
- (void)updateTrackedBagValuesWithChangedKeys:(id)arg1;
- (id)isNowPlayingEnabled;
- (id)isSportsEnabled;

@end
