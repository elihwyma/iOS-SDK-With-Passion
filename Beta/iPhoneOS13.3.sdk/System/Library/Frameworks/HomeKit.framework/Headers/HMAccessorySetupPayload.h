/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMAccessoryOwnershipToken, HMAddAccessoryRequest, HMSetupAccessoryBrowsingRequest, HMSetupAccessoryPayload, NSString;

@interface HMAccessorySetupPayload : NSObject

{
    HMSetupAccessoryPayload *_internalSetupPayload;
    HMAddAccessoryRequest *_addRequest;
    HMAccessoryOwnershipToken *_ownershipToken;
    HMSetupAccessoryBrowsingRequest *_accessoryBrowsingRequest;
    NSString *_suggestedRoomName;
}

@property (retain) HMSetupAccessoryPayload *internalSetupPayload;
@property (nonatomic, readonly) HMAddAccessoryRequest *addRequest;
@property (nonatomic, readonly) HMAccessoryOwnershipToken *ownershipToken;
@property (retain) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest;
@property (copy) NSString *suggestedRoomName;

- (id)initWithURL:(id)arg1;
- (id)initWithAddRequest:(id)arg1 url:(id)arg2 ownershipToken:(id)arg3;
- (id)initWithURL:(id)arg1 ownershipToken:(id)arg2;
- (_Bool)_parseURLForBrowsingRequest:(id)arg1;

@end
