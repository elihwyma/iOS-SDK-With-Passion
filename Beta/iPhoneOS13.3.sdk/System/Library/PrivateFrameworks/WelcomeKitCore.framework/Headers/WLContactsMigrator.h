/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString;

@interface WLContactsMigrator : NSObject

{
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;

- (id)init;
- (id)contentType;
- (id)dataType;
- (_Bool)accountBased;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1;

@end
