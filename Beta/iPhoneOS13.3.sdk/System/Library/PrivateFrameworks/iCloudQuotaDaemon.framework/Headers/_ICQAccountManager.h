/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

@interface _ICQAccountManager : NSObject

{
    ACAccountStore *_accountStore;
}

@property (readonly) ACAccountStore *accountStore;

- (id)init;
- (id)initWithAccountStore:(id)arg1;

@end
