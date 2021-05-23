/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject

{
    NSNumber *_renderLinkRate;
    NSNumber *_playerQueueSize;
    NSNumber *_playerBypassRenderLink;
}

@property (retain, nonatomic) NSNumber *renderLinkRate;
@property (retain, nonatomic) NSNumber *playerQueueSize;
@property (retain, nonatomic) NSNumber *playerBypassRenderLink;

+ (id)CreateControllerParameters:(id)arg1:(id)arg2:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasNilParameter;
- (void)updateNilsFrom:(id)arg1;

@end
