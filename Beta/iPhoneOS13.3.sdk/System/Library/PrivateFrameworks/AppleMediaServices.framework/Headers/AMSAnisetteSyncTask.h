/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSData;

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSAnisetteSyncTask : AMSTask

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSData *_data;
    long long _type;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;

- (id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
- (id)performSync;

@end
