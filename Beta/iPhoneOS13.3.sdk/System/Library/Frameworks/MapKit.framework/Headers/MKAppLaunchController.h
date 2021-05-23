/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SSLookupRequest;

@interface MKAppLaunchController : NSObject

{
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

@property (retain, nonatomic) SSLookupRequest *storeRequest;
@property (retain, nonatomic) NSURL *webURL;

+ (id)sharedController;
+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
