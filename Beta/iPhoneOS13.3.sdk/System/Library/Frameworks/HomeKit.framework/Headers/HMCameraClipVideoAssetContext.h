/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraClipAssetContext.h>

#import <HomeKit/Swift-Protocol.h>

@class NSData;

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <Swift>

{
    NSData *_hlsPlaylist;
}

@property (copy, readonly) NSData *hlsPlaylist;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 hlsPlaylist:(id)arg4;

@end
