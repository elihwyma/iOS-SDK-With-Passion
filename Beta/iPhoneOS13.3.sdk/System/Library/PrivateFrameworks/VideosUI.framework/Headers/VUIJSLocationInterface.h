/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

__attribute__((visibility("hidden")))
@interface VUIJSLocationInterface : IKJSObject

- (void)dealloc;
- (id)authorizationStatus;
- (id)initWithAppContext:(id)arg1;
- (void)_authorizationStatusDidChange:(id)arg1;
- (void)_locationDidChange:(id)arg1;
- (void)requestAuthorization;
- (void)shouldUpdateUserLocation;

@end
