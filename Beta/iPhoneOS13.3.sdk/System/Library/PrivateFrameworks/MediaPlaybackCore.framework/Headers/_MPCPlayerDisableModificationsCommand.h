/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSString;

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand

{
    _Bool _disabled;
}

@property (nonatomic, getter=isDisabled, setter=_setDisabled:) _Bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)setDisabled:(_Bool)arg1;

@end
