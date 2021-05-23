/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MiroCloudDownloader : NSObject

{
    float _progress;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _itemCompletedBlock;
    double _totalInitialDownloadSize;
    NSMutableArray *_requests;
}

@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) NSObject<OS_dispatch_queue> *cancellationQueueFor26820423;
@property (nonatomic) double totalInitialDownloadSize;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) NSArray *localAssets;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy, nonatomic) CDUnknownBlockType itemCompletedBlock;
@property (nonatomic, readonly) unsigned long long nonLocalCount;

+ (id)cloudDownloaderWithAssets:(id)arg1;

- (void)cancelDownloads;
- (id)initWithAssets:(id)arg1;
- (void)startDownloadsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
