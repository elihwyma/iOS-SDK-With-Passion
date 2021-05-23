/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSString;

@interface WLCalendarMigrator : NSObject

{
    EKEventStore *_eventStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;

- (id)contentType;
- (id)dataType;
- (_Bool)accountBased;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)_importDataRecord:(id)arg1 summary:(id)arg2;

@end
