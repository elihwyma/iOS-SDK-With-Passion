/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceTransport : NSObject

{
    long long _connectionType;
    _Bool _requiresCustomPairing;
    NSString *_uid;
}

@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) _Bool requiresCustomPairing;
@property (nonatomic) _Bool shouldUseSystemAuthenticationPrompt;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long connectionType;

- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;

@end
