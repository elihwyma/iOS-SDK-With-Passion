/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, WLSQLController, WLSourceDevice;

@interface WLAppMigrator : NSObject

{
    WLSourceDevice *_device;
    WLSQLController *_sqlController;
}

@property (retain, nonatomic) WLSourceDevice *device;
@property (retain, nonatomic) WLSQLController *sqlController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;
+ (id)dataType;
+ (void)installMigratableApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_ssItemForiTunesStoreIdentifier:(id)arg1;

- (id)contentType;
- (id)dataType;
- (_Bool)accountBased;
- (void)importDataFromProvider:(CDUnknownBlockType)arg1 forSummaries:(id)arg2 summaryStart:(CDUnknownBlockType)arg3 summaryCompletion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)initWithDevice:(id)arg1 sqlController:(id)arg2;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_insertMatchingApps:(id)arg1;

@end
