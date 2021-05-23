/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDispatchOnce, AVWeakReference, NSArray, NSString;

@protocol AVLoggingIdentifier;

__attribute__((visibility("hidden")))
@interface AVAssetInternal : NSObject

{
    AVWeakReference *weakReference;
    AVDispatchOnce *loadChapterInfoOnce;
    NSArray *chapterGroupInfo;
    NSString *anchorChapterType;
    NSArray *availableChapterLanguages;
    NSArray *availableCanonicalizedChapterLanguages;
    NSArray *availableChapterLocales;
    id <AVLoggingIdentifier> loggingIdentifier;
}

@end
