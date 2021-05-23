/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand

{
    float _minimumValue;
    float _maximumValue;
}

@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)changeValue:(float)arg1;

@end
