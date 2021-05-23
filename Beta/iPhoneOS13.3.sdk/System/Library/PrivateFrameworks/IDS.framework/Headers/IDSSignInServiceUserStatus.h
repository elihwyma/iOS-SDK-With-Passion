/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject

{
    unsigned long long _serviceType;
    NSArray *_serviceUserInfos;
}

@property (nonatomic, readonly) unsigned long long serviceType;
@property (nonatomic, readonly) NSArray *serviceUserInfos;
@property (nonatomic, readonly) unsigned long long phoneUserStatus;
@property (nonatomic, readonly) unsigned long long appleIDUserStatus;

- (id)description;
- (id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2;

@end
