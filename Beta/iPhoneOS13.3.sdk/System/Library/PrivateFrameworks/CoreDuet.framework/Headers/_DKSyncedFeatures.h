/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _DKSyncedFeatures : NSObject

{
    _Bool _isDigitalHealthDisabledInitialized;
    _Bool _isDigitalHealthDisabledPreviousResult;
    _Bool _isSingleDevice;
    long long _screenTimeSyncState;
}

@property long long screenTimeSyncState;

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (_Bool)isDigitalHealthDisabledWithIsSingleDevice:(_Bool)arg1 forTransports:(long long)arg2;
- (_Bool)isIDSMessageGatingDisabled;
- (_Bool)isSiriPortraitDisabled;
- (_Bool)isSupergreenDisabledForTransports:(long long)arg1;
- (void)_fetchScreenTimeSyncState;
- (id)_stateStringWithState:(long long)arg1;

@end
