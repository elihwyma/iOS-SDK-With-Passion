/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCWrappedNativeVideoDecoder : NSObject

{
    unique_ptr_28850a1b _wrappedDecoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)releaseDecoder;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (id)implementationName;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (id)initWithNativeDecoder:(unique_ptr_28850a1b)arg1;
- (unique_ptr_28850a1b)releaseWrappedDecoder;

@end
