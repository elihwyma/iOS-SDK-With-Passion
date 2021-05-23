/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CKContainer, CKRecordZoneID;

@protocol APSConnectionDelegate;

@interface CRKCloudEnableRemoteNotificationsOperation : CRKCloudEncapsulatedOperation

{
    _Bool _subscribedToConatiner;
    id <APSConnectionDelegate> _connectionDelegate;
    CKRecordZoneID *_zoneId;
    CKContainer *_container;
}

@property (nonatomic) _Bool subscribedToConatiner;
@property (nonatomic, readonly) id <APSConnectionDelegate> connectionDelegate;
@property (nonatomic, readonly) CKRecordZoneID *zoneId;
@property (nonatomic, readonly) CKContainer *container;

- (void)main;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (void)createPushConnection;
- (void)subscribeToZoneOperationDidFinish:(id)arg1;
- (void)createPushConnectionOperationDidFinish:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 container:(id)arg3 zoneId:(id)arg4 subscribedToContainer:(_Bool)arg5 connectionDelegate:(id)arg6;

@end
