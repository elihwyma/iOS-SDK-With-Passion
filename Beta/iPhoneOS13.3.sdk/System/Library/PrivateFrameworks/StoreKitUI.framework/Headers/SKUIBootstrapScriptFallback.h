/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIBootstrapScriptFallback : NSObject

{
    NSURL *_cacheFolder;
    NSString *_cacheFilename;
    double _maximumAge;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSURL *cachedFileLocation;
@property (nonatomic, readonly) long long _unsynchronizedState;
@property (nonatomic, readonly) NSURL *cacheFolder;
@property (copy, nonatomic, readonly) NSString *cacheFilename;
@property double maximumAge;
@property (readonly) long long state;
@property (readonly) _Bool isBagAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cacheFilenameForStoreFrontIdentifier:(id)arg1;
+ (id)defaultCacheFolder;

- (id)init;
- (void)invalidate;
- (_Bool)canFallbackForError:(id)arg1;
- (id)retrieveScript:(id *)arg1;
- (void)scriptEvaluated:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)_createCacheDirectoriesIfNeeded;
- (id)initWithCacheFolder:(id)arg1 filename:(id)arg2;
- (void)_logError:(id)arg1 forOperation:(id)arg2;
- (void)_runWhenBackgroundWorkFinished:(CDUnknownBlockType)arg1;
- (_Bool)_setCacheAge:(id)arg1 error:(id *)arg2;

@end
