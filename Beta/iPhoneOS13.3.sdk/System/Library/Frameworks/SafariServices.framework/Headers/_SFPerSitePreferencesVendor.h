/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WBSAutomaticReaderActivationManager, _SFContentBlockersPreferenceManager, _SFGeolocationPermissionManager, _SFPageZoomPreferenceManager, _SFRequestDesktopSitePreferenceManager, _SFUserMediaPermissionController;

@interface _SFPerSitePreferencesVendor : NSObject

{
    NSMutableDictionary *_preferenceToManager;
    WBSAutomaticReaderActivationManager *_automaticReaderPreferenceManager;
    _SFContentBlockersPreferenceManager *_contentBlockersPreferenceManager;
    _SFRequestDesktopSitePreferenceManager *_requestDesktopSitePreferenceManager;
    _SFPageZoomPreferenceManager *_pageZoomPreferenceManager;
}

@property (nonatomic, readonly) WBSAutomaticReaderActivationManager *automaticReaderActivationManager;
@property (nonatomic, readonly) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager;
@property (nonatomic, readonly) _SFUserMediaPermissionController *sharedUserMediaPermissionController;
@property (nonatomic, readonly) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager;
@property (nonatomic, readonly) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (nonatomic, readonly) _SFPageZoomPreferenceManager *pageZoomPreferenceManager;

- (id)managerForPreference:(id)arg1;

@end
