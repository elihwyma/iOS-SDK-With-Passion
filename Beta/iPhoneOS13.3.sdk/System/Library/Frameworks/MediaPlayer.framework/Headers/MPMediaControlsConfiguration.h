/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPMediaControlsConfiguration : NSObject <Swift>

{
    _Bool _shouldPreventAutorotation;
    _Bool _allowsNowPlayingApplicationLaunch;
    _Bool _sortByIsVideoRoute;
    long long _style;
    long long _initatorStyle;
    NSString *_routingContextUID;
    NSString *_presentingAppBundleID;
}

@property (nonatomic) long long style;
@property (nonatomic) long long initatorStyle;
@property (copy, nonatomic) NSString *routingContextUID;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (nonatomic) _Bool shouldPreventAutorotation;
@property (nonatomic) _Bool allowsNowPlayingApplicationLaunch;
@property (nonatomic) _Bool sortByIsVideoRoute;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
