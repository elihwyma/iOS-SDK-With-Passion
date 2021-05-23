/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AMSKeybag : NSObject

{
    unsigned int _fairPlayContextID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int fairPlayContextID;

+ (id)sharedInstance;

- (id)init;
- (id)keybagSyncDataWithAccountID:(id)arg1 transactionType:(unsigned int)arg2 error:(id *)arg3;
- (unsigned int)fairplayContextWithError:(id *)arg1;
- (unsigned int)_getFairplayContext:(id *)arg1;
- (_Bool)importKeybagWithData:(id)arg1 error:(id *)arg2;
- (void)_destroyContext;
- (unsigned int)fairplayContext:(id *)arg1;
- (_Bool)importKeybagData:(id)arg1 outError:(id *)arg2;
- (id)keybagSyncData:(id)arg1 transactionType:(unsigned int)arg2 outError:(id *)arg3;
- (id)kybsyncData:(id)arg1 transationType:(unsigned int)arg2 error:(id *)arg3;
- (void)resetContext;

@end
