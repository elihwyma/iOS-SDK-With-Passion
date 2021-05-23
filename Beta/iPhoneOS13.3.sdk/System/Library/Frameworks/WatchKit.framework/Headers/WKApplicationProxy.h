/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface WKApplicationProxy : NSObject

{
    NSURL *_bundleURL;
}

@property (nonatomic, readonly) NSURL *bundleURL;

+ (id)watchAppBundleUrlWithContainerUrl:(id)arg1;
+ (id)gizmoAppBundleUrlWithPluginUrl:(id)arg1;
+ (id)applicationsForContainerProxy:(id)arg1;

- (id)initWithBundleURL:(id)arg1;

@end
