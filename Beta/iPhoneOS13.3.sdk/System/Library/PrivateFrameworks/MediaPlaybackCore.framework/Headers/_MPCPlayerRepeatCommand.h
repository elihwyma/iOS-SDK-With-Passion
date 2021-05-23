/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerRepeatCommand : _MPCPlayerCommand

{
    _Bool _supportsChangeRepeat;
    _Bool _supportsAdvanceRepeat;
    long long _currentRepeatType;
    NSArray *_supportedRepeatTypes;
}

@property (nonatomic) long long currentRepeatType;
@property (retain, nonatomic) NSArray *supportedRepeatTypes;
@property (nonatomic) _Bool supportsChangeRepeat;
@property (nonatomic) _Bool supportsAdvanceRepeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)advance;
- (id)setRepeatType:(long long)arg1;

@end
