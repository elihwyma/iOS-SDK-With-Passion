/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AudioTier : NSObject

{
    unsigned int mode;
    unsigned int tier;
    unsigned int duplication;
    unsigned int bundling;
    unsigned int codecPayload;
    unsigned int codecBitrate;
    double duration;
}

@property unsigned int mode;
@property unsigned int tier;
@property unsigned int duplication;
@property unsigned int bundling;
@property unsigned int codecPayload;
@property unsigned int codecBitrate;
@property double duration;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMode:(unsigned int)arg1 tier:(unsigned int)arg2 duplication:(unsigned int)arg3 bundling:(unsigned int)arg4 codecPayload:(unsigned int)arg5 codecBitrate:(unsigned int)arg6;

@end
