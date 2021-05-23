/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOPrivacyManager : NSObject

- (id)init;
- (void)dealloc;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;

@end
