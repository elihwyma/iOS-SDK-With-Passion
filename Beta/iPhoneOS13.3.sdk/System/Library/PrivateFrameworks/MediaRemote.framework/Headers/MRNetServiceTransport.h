/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRExternalDeviceTransport.h>

@class NSNetService, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport

{
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    _Bool _requiresCustomPairing;
    NSNetService *_netService;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) _Bool requiresCustomPairing;

+ (id)createDeviceInfoFromNetService:(id)arg1;
+ (id)createDeviceInfoFromTXTRecord:(id)arg1;

- (id)description;
- (id)name;
- (long long)port;
- (id)error;
- (void)reset;
- (long long)connectionType;
- (id)hostname;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)deviceInfo;
- (id)initWithNetService:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;

@end
