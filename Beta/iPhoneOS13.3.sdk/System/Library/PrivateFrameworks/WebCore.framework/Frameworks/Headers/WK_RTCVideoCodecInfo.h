/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoCodecInfo : NSObject

{
    NSString *_name;
    NSDictionary *_parameters;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *parameters;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (struct SdpVideoFormat)nativeSdpVideoFormat;
- (id)initWithNativeSdpVideoFormat:(struct SdpVideoFormat)arg1;
- (_Bool)isEqualToCodecInfo:(id)arg1;

@end
