/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WK_RTCVideoBitrateAllocation : NSObject

{
    struct VideoBitrateAllocation _nativeVideoBitrateAllocation;
}

- (id).cxx_construct;
- (id)initWithNativeVideoBitrateAllocation:(const struct VideoBitrateAllocation *)arg1;
- (struct VideoBitrateAllocation)nativeVideoBitrateAllocation;

@end
