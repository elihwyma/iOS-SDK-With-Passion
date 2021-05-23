/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface TVApplicationControllerContext : NSObject

{
    _Bool _supplementary;
    NSURL *_javaScriptApplicationURL;
    NSString *_storageIdentifier;
    NSDictionary *_launchOptions;
    NSURL *_appLocalJSURL;
    NSURL *_appJSCachePath;
    NSString *_bagBootURLKey;
    NSURL *_offlineJSURL;
}

@property (nonatomic, getter=isSupplementary) _Bool supplementary;
@property (copy, nonatomic) NSURL *appLocalJSURL;
@property (copy, nonatomic) NSURL *appJSCachePath;
@property (copy, nonatomic) NSString *bagBootURLKey;
@property (copy, nonatomic) NSURL *offlineJSURL;
@property (copy, nonatomic) NSURL *javaScriptApplicationURL;
@property (copy, nonatomic) NSString *storageIdentifier;
@property (copy, nonatomic) NSDictionary *launchOptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
