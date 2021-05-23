/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCameraMetadataNode : AXMSourceNode

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)triggerWithCameraType:(long long)arg1 cacheKey:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
