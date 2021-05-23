/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSString.h>

@interface NSString (TVPlaybackAdditions)

+ (id)tvp_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;
+ (id)tvp_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tvp_uppercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;

- (id)tvp_languageCodeWithoutRegion;
- (id)tvp_dataFromHexString;

@end
