/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

@class NSString;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand

{
    _Bool _value;
    unsigned int _command;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
    long long _presentationStyle;
}

@property (nonatomic, readonly) unsigned int command;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) _Bool value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;
- (id)changeValue:(_Bool)arg1;

@end
