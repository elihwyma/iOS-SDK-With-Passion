/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage

{
    MRAVOutputDevice *_route;
}

@property (nonatomic, readonly) MRAVOutputDevice *route;
@property (nonatomic, readonly) int status;

- (unsigned long long)type;
- (id)initWithRoute:(id)arg1 status:(int)arg2;

@end
