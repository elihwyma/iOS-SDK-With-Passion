/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)produceImage:(id)arg1;
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)triggerWithPixelBuffer:(struct __CVBuffer *)arg1 exifOrientation:(unsigned int)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end
