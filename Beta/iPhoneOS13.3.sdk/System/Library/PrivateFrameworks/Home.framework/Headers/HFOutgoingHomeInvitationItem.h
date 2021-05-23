/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMOutgoingHomeInvitation, NSString;

@protocol HFHomeKitObject;

@interface HFOutgoingHomeInvitationItem : HFItem <Swift>

{
    HMOutgoingHomeInvitation *_outgoingInvitation;
}

@property (nonatomic, readonly) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithOutgoingInvitation:(id)arg1;

@end
