/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMetadataItemFilterInternal, NSDictionary;

@interface AVMetadataItemFilter : NSObject

{
    AVMetadataItemFilterInternal *_itemFilterInternal;
}

@property (readonly) NSDictionary *whitelist;

+ (id)metadataItemFilterForSharing;

@end
