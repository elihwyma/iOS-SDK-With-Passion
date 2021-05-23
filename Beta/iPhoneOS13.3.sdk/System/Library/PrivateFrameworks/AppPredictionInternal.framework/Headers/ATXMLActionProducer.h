/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXInternalActionPredictionUpdateNotification, NSString;

@protocol ATXActionProducerDelegate;

@interface ATXMLActionProducer : NSObject

{
    NSString *_cacheBasePath;
    NSString *_cacheFilename;
    ATXInternalActionPredictionUpdateNotification *_updateNotification;
    id <ATXActionProducerDelegate> _delegate;
}

@property (weak, nonatomic) id <ATXActionProducerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (id)_cachePath;
- (id)produceActions;
- (id)_getActionsFromCache;
- (_Bool)_shouldInvalidateCacheWithTTL:(double)arg1;
- (_Bool)_writeIntermediateCache;

@end
