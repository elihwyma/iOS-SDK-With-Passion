/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIWebClip.h>

@class NSURL, _WKApplicationManifest;

@interface UIWebClip (SafariServicesExtras)

@property (nonatomic, readonly) NSURL *_sf_applicationManifestPath;
@property (retain, nonatomic, setter=_sf_setApplicationManifest:) _WKApplicationManifest *_sf_applicationManifest;

@end
