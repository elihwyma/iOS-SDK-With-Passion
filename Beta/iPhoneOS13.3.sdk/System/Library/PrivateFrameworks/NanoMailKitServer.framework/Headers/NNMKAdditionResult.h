/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKProtoMessageAdditions, NSMutableArray;

@interface NNMKAdditionResult : NSObject

{
    _Bool _receivedOldMessages;
    NNMKProtoMessageAdditions *_protoMessagesWithNotificationPriority;
    NNMKProtoMessageAdditions *_protoMessagesWithDefaultPriority;
    NSMutableArray *_messageIdsWithNotificationPriority;
    NSMutableArray *_messageIdsWithDefaultPriority;
    unsigned long long _resendInterval;
}

@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority;
@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority;
@property (retain, nonatomic) NSMutableArray *messageIdsWithNotificationPriority;
@property (retain, nonatomic) NSMutableArray *messageIdsWithDefaultPriority;
@property (nonatomic) _Bool receivedOldMessages;
@property (nonatomic) unsigned long long resendInterval;

@end
