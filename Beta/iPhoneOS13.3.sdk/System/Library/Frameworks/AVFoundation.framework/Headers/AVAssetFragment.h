/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetFragmentInternal;

@interface AVAssetFragment : NSObject

{
    AVAssetFragmentInternal *_internal;
}

@property (readonly) long long sequenceNumber;

+ (id)fragmentWithSequenceNumber:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithSequenceNumber:(long long)arg1;

@end
