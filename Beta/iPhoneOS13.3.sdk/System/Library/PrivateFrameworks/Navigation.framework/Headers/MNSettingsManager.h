/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNObserverHashTable, MNSettings;

@interface MNSettingsManager : NSObject

{
    MNSettings *_settings;
    MNObserverHashTable *_observers;
}

@property (nonatomic, readonly) MNSettings *settings;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateForSettings:(id)arg1;
- (void)setVolumeFromDefaults;

@end
