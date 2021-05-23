/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSBulletinDataProvider : NSObject

{
    BBDataProviderConnection *_dataProviderConnection;
    BBDataProviderProxy *_dataProviderProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bulletins;
    NSString *_authenticationBulletinRecordID;
}

@property (retain, nonatomic) BBDataProviderConnection *dataProviderConnection;
@property (retain, nonatomic) BBDataProviderProxy *dataProviderProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *bulletins;
@property (copy, nonatomic) NSString *authenticationBulletinRecordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (id)sectionParameters;
- (id)defaultSectionInfo;
- (id)sectionIcon;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)postAuthenticationBulletinWithAppStoreRoomURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeBulletinWithRecordID:(id)arg1;
- (id)_bulletinRequestWithMessage:(id)arg1 actionURL:(id)arg2;
- (void)_addBulletinRequest:(id)arg1;
- (void)_prepareDataProviderProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_removeBulletin:(id)arg1;

@end
