/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface NTKSensitiveUIMonitor : NSObject

{
    NSHashTable *_observers;
    int _notifyToken;
    _Bool _hideSensitiveUI;
    _Bool _needPrefsUpdate;
}

+ (id)sharedMonitor;

- (id)init;
- (_Bool)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)arg1;
- (void)removeSensitiveUIObserver:(id)arg1;
- (_Bool)shouldHideForSensitivity:(long long)arg1;
- (_Bool)hideSensitiveUISwitchEnabled;

@end
