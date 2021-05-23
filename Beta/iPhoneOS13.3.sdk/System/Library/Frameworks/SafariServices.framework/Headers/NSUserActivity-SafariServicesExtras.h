/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <CoreServices/NSUserActivity.h>

@class NSNumber, NSUUID, _SFNavigationIntent;

@interface NSUserActivity (SafariServicesExtras)

@property (nonatomic, readonly) _SFNavigationIntent *_sf_windowCreationNavigationIntent;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationTabUUID;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationSourceBrowserControllerUUID;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationRecentlyClosedTabUUID;
@property (nonatomic, readonly) NSNumber *_sf_windowCreationMode;

+ (id)_sf_windowCreationActivityWithNavigationIntent:(id)arg1;
+ (id)_sf_windowCreationActivityWithMode:(long long)arg1;
+ (id)_sf_windowCreationActivityWithTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationAcitivtyFromSceneConnectionOptions:(id)arg1;

- (id)sf_windowCreationNavigationIntentID;
- (void)_sf_invalidateWindowCreationData;

@end
