/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSData.h>

@interface NSData (TVPlaybackAdditions)

- (id)tvp_lowercaseHexString;
- (id)tvp_uppercaseHexString;
- (id)tvp_MD5Digest;
- (id)tvp_SHA1Digest;
- (id)tvp_SHA256Digest;

@end
