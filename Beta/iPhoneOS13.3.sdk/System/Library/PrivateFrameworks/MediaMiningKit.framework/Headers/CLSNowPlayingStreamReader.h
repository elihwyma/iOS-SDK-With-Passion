/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSNowPlayingStreamReader : NSObject

{
    unsigned long long _conversionOptions;
}

@property (nonatomic) unsigned long long conversionOptions;

- (id)init;
- (void)enumerateSessionsWithBlock:(CDUnknownBlockType)arg1;

@end
