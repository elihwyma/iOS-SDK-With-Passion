/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage

{
    MRAVOutputDevice *_route;
}

@property (nonatomic, readonly) MRAVOutputDevice *route;
@property (nonatomic, readonly) long long inputType;

- (unsigned long long)type;
- (id)initWithRoute:(id)arg1 inputType:(long long)arg2;

@end
