/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject

{
    long long _videoContextSlotIdentifier;
    CALayer *_videoLayer;
}

@property (nonatomic, readonly) long long videoContextSlotIdentifier;
@property (retain, nonatomic) CALayer *videoLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cleanUpSubLayerForLayer:(id)arg1;
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;
- (id)nameForSubLayer;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;

@end
