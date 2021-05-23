/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCCodecSpecificInfoH264 : NSObject

{
    unsigned long long _packetizationMode;
}

@property (nonatomic) unsigned long long packetizationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CodecSpecificInfo)nativeCodecSpecificInfo;

@end
