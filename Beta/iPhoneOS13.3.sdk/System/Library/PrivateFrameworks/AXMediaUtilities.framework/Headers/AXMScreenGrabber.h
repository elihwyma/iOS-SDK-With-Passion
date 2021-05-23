/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMScreenGrabber : NSObject

- (id)init;
- (id)grabScreenWithRect:(struct CGRect)arg1 orientation:(long long)arg2 ignoredLayerContextIDs:(id)arg3 diagnostics:(id)arg4 error:(id *)arg5;
- (id)grabScreenWithRect:(struct CGRect)arg1 orientation:(long long)arg2 ignoredLayerContextIDs:(id)arg3 renderToPixelBufferNow:(_Bool)arg4 diagnostics:(id)arg5 error:(id *)arg6;

@end
