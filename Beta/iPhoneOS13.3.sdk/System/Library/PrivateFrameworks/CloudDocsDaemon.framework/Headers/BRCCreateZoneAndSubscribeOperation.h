/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKRecordZone, CKRecordZoneID, NSString;

__attribute__((visibility("hidden")))
@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation

{
    CKRecordZoneID *_zoneID;
    _Bool _optimisticSubscribe;
    _Bool _subscriptionOnly;
    CDUnknownBlockType _createZoneAndSubscribeCompletionBlock;
    CKRecordZone *_createdZone;
}

@property (nonatomic) _Bool subscriptionOnly;
@property (nonatomic) _Bool optimisticSubscribe;
@property (copy, nonatomic) CDUnknownBlockType createZoneAndSubscribeCompletionBlock;
@property (nonatomic, readonly) CKRecordZone *createdZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSession:(id)arg1 zoneID:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (void)_registerSubscriptionForZoneID:(id)arg1 isOptimisticSubscribe:(_Bool)arg2;
- (void)_createZoneWithZoneID:(id)arg1;

@end
