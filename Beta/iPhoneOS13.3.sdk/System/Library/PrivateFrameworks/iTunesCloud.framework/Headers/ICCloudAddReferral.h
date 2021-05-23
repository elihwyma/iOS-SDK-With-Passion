/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <Swift>

{
    NSString *_playlistGlobalID;
    long long _albumAdamID;
}

@property (copy, nonatomic, readonly) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long albumAdamID;

+ (_Bool)supportsSecureCoding;
+ (id)referralWithAlbumAdamID:(long long)arg1;
+ (id)referralWithPlaylistGlobalID:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
