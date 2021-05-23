/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject

{
    NSData *_userInfoData;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (copy) NSData *userInfoData;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;
- (_Bool)verifyUserInfo;

@end
