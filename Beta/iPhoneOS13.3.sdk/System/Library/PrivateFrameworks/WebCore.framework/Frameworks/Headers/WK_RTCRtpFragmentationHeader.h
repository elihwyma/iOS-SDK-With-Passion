/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WK_RTCRtpFragmentationHeader : NSObject

{
    NSArray *_fragmentationOffset;
    NSArray *_fragmentationLength;
    NSArray *_fragmentationTimeDiff;
    NSArray *_fragmentationPlType;
}

@property (retain, nonatomic) NSArray *fragmentationOffset;
@property (retain, nonatomic) NSArray *fragmentationLength;
@property (retain, nonatomic) NSArray *fragmentationTimeDiff;
@property (retain, nonatomic) NSArray *fragmentationPlType;

- (unique_ptr_91070b9b)createNativeFragmentationHeader;
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader *)arg1;

@end
