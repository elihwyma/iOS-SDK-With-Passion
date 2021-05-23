/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKProtoMessageStatusUpdates, NSArray;

@interface NNMKUpdatesResult : NSObject

{
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithNotificationPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
    NSArray *_messageIdsWithNotificationPriority;
    NSArray *_messageIdsWithDefaultPriority;
    NSArray *_messageIdsWithDefaultPriorityAndProtectedChannel;
    NSArray *_messagesToAdd;
    NSArray *_messageIdsToDelete;
}

@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority;
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority;
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
@property (retain, nonatomic) NSArray *messageIdsWithNotificationPriority;
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriority;
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel;
@property (retain, nonatomic) NSArray *messagesToAdd;
@property (retain, nonatomic) NSArray *messageIdsToDelete;

@end
