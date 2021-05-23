/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand

{
    _Bool _supportsChangeShuffle;
    _Bool _supportsAdvanceShuffle;
    long long _currentShuffleType;
    NSArray *_supportedShuffleTypes;
}

@property (nonatomic) long long currentShuffleType;
@property (retain, nonatomic) NSArray *supportedShuffleTypes;
@property (nonatomic) _Bool supportsChangeShuffle;
@property (nonatomic) _Bool supportsAdvanceShuffle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)advance;
- (id)setShuffleType:(long long)arg1;

@end
