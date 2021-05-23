/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNullCoreLocationProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (int)authorizationStatusForBundleIdentifier:(id)arg1;
- (int)authorizationStatusForBundle:(id)arg1;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1;

@end
