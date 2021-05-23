/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKProtoMessageDeletions, NSArray;

@interface NNMKDeletionResult : NSObject

{
    NNMKProtoMessageDeletions *_protectedProtobuf;
    NNMKProtoMessageDeletions *_unprotectedNotificationProtobuf;
    NNMKProtoMessageDeletions *_unprotectedDefaultProtobuf;
    NSArray *_protectedMessageIds;
    NSArray *_unprotectedNotificationMessageIds;
    NSArray *_unprotectedDefaultMessageIds;
}

@property (retain, nonatomic) NNMKProtoMessageDeletions *protectedProtobuf;
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedNotificationProtobuf;
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedDefaultProtobuf;
@property (retain, nonatomic) NSArray *protectedMessageIds;
@property (retain, nonatomic) NSArray *unprotectedNotificationMessageIds;
@property (retain, nonatomic) NSArray *unprotectedDefaultMessageIds;

@end
