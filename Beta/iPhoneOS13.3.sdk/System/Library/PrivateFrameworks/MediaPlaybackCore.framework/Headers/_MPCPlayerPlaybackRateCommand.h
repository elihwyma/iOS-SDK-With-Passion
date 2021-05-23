/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand

{
    float _preferredPlaybackRate;
    NSArray *_supportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;
@property (nonatomic) float preferredPlaybackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)setPlaybackRate:(float)arg1;

@end
