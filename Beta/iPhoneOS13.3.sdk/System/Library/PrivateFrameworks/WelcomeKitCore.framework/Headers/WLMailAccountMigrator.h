/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@interface WLMailAccountMigrator : NSObject

{
    ACAccountStore *_accountStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;

- (id)contentType;
- (id)dataType;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;
- (_Bool)accountBased;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)importWillBegin;
- (void)importDidEnd;
- (void)_importGoogleAccountWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
