/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAsset, NSArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IrisSampleInfo : NSObject

{
    NSArray *_timeRanges;
    NSArray *_gapTimeRanges;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDStruct_1b6d18a9 _dominantSampleDuration;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSArray *timeRanges;
@property (retain, nonatomic) NSArray *gapTimeRanges;
@property (nonatomic) CDStruct_1b6d18a9 dominantSampleDuration;

+ (void)initialize;
+ (void)clearCache;
+ (id)infoForAsset:(id)arg1;

- (id)initWithAsset:(id)arg1;
- (void)loadInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadInfoWithTrackOutput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
