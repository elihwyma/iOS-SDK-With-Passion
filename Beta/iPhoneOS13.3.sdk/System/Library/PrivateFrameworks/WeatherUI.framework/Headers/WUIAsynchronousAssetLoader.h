/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString, NSTimer;

@protocol OS_dispatch_queue, WAAssetLoaderDelegate;

@interface WUIAsynchronousAssetLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_caml_parsing_queue;
    id <WAAssetLoaderDelegate> _delegate;
    NSCache *_resourceCache;
    NSCache *_dataCache;
    NSCache *_caDataCache;
    NSTimer *_opportunityTimer;
}

@property (retain, nonatomic) NSCache *resourceCache;
@property (retain, nonatomic) NSCache *dataCache;
@property (retain, nonatomic) NSCache *caDataCache;
@property (retain, nonatomic) NSTimer *opportunityTimer;
@property (weak, nonatomic) id <WAAssetLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedAssetLoader;

- (id)init;
- (void)dealloc;
- (id)queue;
- (void)beginLoading;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)CAMLParser:(id)arg1 formatErrorString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(id)arg1 formatWarningString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)cancelLoading;
- (void)_asynchronouslyPreheatCADataForCity:(id)arg1;
- (id)caml_parsing_queue;
- (id)filenameForCondition:(long long)arg1 isDay:(_Bool)arg2;
- (void)loadRootLayerForFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_primeOpportunisticLoad;
- (void)_opportunisticallyLoad;
- (void)setResource:(id)arg1 forKey:(id)arg2;
- (void)didReceivedMemoryWarning;

@end
