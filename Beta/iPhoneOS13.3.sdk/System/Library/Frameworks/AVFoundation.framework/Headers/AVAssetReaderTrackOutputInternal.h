/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetTrack, AVOutputSettings, AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetReaderTrackOutputInternal : NSObject

{
    AVAssetTrack *track;
    AVOutputSettings *outputSettings;
    NSString *audioTimePitchAlgorithm;
    _Bool appliesPreferredTrackTransform;
    AVWeakReference *weakReferenceToAttachedAdaptor;
}

@end
