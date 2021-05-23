/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKProtoMessageContentSync;

@interface NNMKMessageContentResult : NSObject

{
    _Bool _isContentCompletelySynced;
    _Bool _isNotificationPriority;
    _Bool _isUserRequest;
    _Bool _alreadySyncedWithCurrentPriority;
    _Bool _messageDoesNotExist;
    NNMKProtoMessageContentSync *_protoMessageContentSync;
    unsigned long long _resendInterval;
    long long _compressedTextDataLength;
}

@property (retain, nonatomic) NNMKProtoMessageContentSync *protoMessageContentSync;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) long long compressedTextDataLength;
@property (nonatomic) _Bool isContentCompletelySynced;
@property (nonatomic) _Bool isNotificationPriority;
@property (nonatomic) _Bool isUserRequest;
@property (nonatomic) _Bool alreadySyncedWithCurrentPriority;
@property (nonatomic) _Bool messageDoesNotExist;

@end
