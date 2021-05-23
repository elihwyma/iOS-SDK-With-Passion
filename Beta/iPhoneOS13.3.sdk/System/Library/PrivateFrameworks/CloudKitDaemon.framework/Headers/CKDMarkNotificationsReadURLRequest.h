/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest

{
    CDUnknownBlockType _notificationMarkedReadProgressBlock;
    NSArray *_notificationIDs;
    NSMutableDictionary *_notificationIDsByRequestID;
}

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID;
@property (copy, nonatomic) CDUnknownBlockType notificationMarkedReadProgressBlock;

- (int)operationType;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
