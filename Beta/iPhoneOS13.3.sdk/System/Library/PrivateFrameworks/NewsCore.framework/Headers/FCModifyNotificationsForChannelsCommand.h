/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCModifyNotificationsForChannelsCommand : FCCommand

{
    NSArray *_channelIDsToAdd;
    NSArray *_paidChannelIDsToAdd;
    NSArray *_channelIDsToRemove;
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_storefrontID;
}

@property (copy, nonatomic) NSArray *channelIDsToAdd;
@property (copy, nonatomic) NSArray *paidChannelIDsToAdd;
@property (copy, nonatomic) NSArray *channelIDsToRemove;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithChannelIDsToAdd:(id)arg1 paidChannelIDsToAdd:(id)arg2 channelIDsToRemove:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;

@end
