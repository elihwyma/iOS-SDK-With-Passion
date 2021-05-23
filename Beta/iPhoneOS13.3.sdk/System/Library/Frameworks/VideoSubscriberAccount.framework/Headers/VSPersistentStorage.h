/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class VSAccountChannelsCenter, VSAccountStore, VSPrivacyFacade, VSPrivacyVoucherLockbox;

@interface VSPersistentStorage : NSObject

{
    VSAccountStore *_accountStore;
    VSAccountChannelsCenter *_channelsCenter;
    VSPrivacyVoucherLockbox *_voucherLockbox;
    VSPrivacyFacade *_privacyFacade;
}

@property (nonatomic, readonly) VSAccountStore *accountStore;
@property (nonatomic, readonly) VSAccountChannelsCenter *channelsCenter;
@property (nonatomic, readonly) VSPrivacyVoucherLockbox *voucherLockbox;
@property (nonatomic, readonly) VSPrivacyFacade *privacyFacade;

+ (id)defaultStorageDirectoryURL;

- (id)init;
- (id)initWithAccountStoreClass:(Class)arg1 channelsCenterClass:(Class)arg2;
- (id)initWithAccountStoreClass:(Class)arg1;

@end
