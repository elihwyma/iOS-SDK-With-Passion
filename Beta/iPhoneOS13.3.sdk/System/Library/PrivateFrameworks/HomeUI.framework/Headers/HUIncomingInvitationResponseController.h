/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMIncomingHomeInvitation, NSError;

@protocol HUIncomingInvitationResponseControllerDelegate;

@interface HUIncomingInvitationResponseController : NSObject

{
    id <HUIncomingInvitationResponseControllerDelegate> _delegate;
    HMIncomingHomeInvitation *_invitation;
    unsigned long long _state;
    unsigned long long _response;
    NSError *_error;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long response;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic, readonly) id <HUIncomingInvitationResponseControllerDelegate> delegate;
@property (nonatomic, readonly) HMIncomingHomeInvitation *invitation;

- (id)init;
- (id)_acceptInvitation;
- (id)initWithDelegate:(id)arg1 invitation:(id)arg2;
- (id)_declineInvitation;
- (void)respondToInvitationWithResponse:(unsigned long long)arg1;

@end
