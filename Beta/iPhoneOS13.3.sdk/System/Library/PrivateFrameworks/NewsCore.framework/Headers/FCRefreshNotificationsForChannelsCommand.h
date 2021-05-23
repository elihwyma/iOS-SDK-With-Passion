/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCRefreshNotificationsForChannelsCommand : FCCommand

{
    NSArray *_channelIDs;
    NSArray *_paidChannelIDs;
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_storefrontID;
}

@property (copy, nonatomic) NSArray *channelIDs;
@property (copy, nonatomic) NSArray *paidChannelIDs;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;

@end
