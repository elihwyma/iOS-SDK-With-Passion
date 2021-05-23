/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInputPassDescriptionInternal, NSArray;

@interface AVAssetWriterInputPassDescription : NSObject

{
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property (nonatomic, readonly) NSArray *sourceTimeRanges;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithTimeRanges:(id)arg1;

@end
