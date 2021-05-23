/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSArray;

@interface AMSAutomaticDownloadKindsResult : NSObject

{
    ACAccount *_account;
    NSArray *_enabledMediaKinds;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *enabledMediaKinds;

- (id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2;

@end
