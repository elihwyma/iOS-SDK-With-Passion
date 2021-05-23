/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray, NSString;

@protocol NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVChapterMetadataItemInternal : NSObject

{
    AVWeakReference *weakReference;
    struct OpaqueFigAsset *figAsset;
    long long chapterGroupIndex;
    long long chapterIndex;
    NSString *chapterType;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    NSString *chapterDataType;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    long long valueStatus;
    int valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end
