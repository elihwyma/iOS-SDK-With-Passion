/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSPFileDataStorage;

@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSPAVAssetResourceLoaderDelegate : NSObject

{
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)delegateQueue;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2;
- (void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2;

@end
