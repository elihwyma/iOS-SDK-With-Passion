/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@class AXMScreenGrabber;

@interface AXMScreenCaptureNode : AXMSourceNode

{
    AXMScreenGrabber *_screenGrabber;
}

@property (retain, nonatomic) AXMScreenGrabber *screenGrabber;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)triggerWithScreenCaptureRegion:(struct CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
