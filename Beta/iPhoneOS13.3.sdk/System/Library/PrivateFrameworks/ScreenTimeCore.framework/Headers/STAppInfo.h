/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface STAppInfo : NSObject

{
    short _platform;
    long long _source;
    NSString *_bundleIdentifier;
    NSString *_displayName;
    NSString *_developerName;
    NSString *_ratingLabel;
    NSURL *_localURL;
    NSURL *_artworkURL;
    NSData *_artworkData;
}

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) short platform;
@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy) NSData *artworkData;

- (id)description;

@end
