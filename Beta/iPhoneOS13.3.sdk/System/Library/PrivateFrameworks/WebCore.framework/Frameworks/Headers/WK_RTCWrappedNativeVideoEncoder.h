/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCWrappedNativeVideoEncoder : NSObject

{
    unique_ptr_2722152f _wrappedEncoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)implementationName;
- (unique_ptr_2722152f)releaseWrappedEncoder;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)releaseEncoder;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (id)scalingSettings;
- (id)initWithNativeEncoder:(unique_ptr_2722152f)arg1;

@end
