/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOKeyBagNotification : NSObject

{
    int _currentState;
    int _notifyToken;
}

@property (nonatomic, readonly) int state;

+ (id)sharedObject;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (_Bool)canAccessFilesWithProtection:(unsigned long long)arg1;
- (void)updateState;
- (void)_statusChanged;
- (_Bool)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2;

@end
