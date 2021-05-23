/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/Swift-Protocol.h>

@class LSBundleProxy, NSDictionary, NSString, NSURL;

@protocol LSIconResourceLocator <Swift>

@property (copy, readonly) LSBundleProxy *typeOwner;
@property (copy, readonly) NSString *applicationIdentifier;
@property (readonly) NSURL *resourcesDirectoryURL;
@property (readonly) NSDictionary *bundleIconsDictionary;

@end
