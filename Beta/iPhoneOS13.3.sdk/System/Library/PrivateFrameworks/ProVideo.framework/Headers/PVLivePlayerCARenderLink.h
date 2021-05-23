/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVLivePlayerRenderLink.h>

@class CADisplayLink;

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink

{
    long long _prefferedCADisplayFPS;
    CADisplayLink *_displayLink;
}

@property (nonatomic) long long prefferedCADisplayFPS;

- (void)teardown;
- (void)displayLinkFired:(id)arg1;
- (void)rebuild;
- (id)initWithCADisplayLinkFPS:(long long)arg1;

@end
