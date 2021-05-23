/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <PipelineKit/PIOperationSubclass.h>

@class CLSLocationCache;

@interface CLSCachedGeocoderOperation : PIOperationSubclass

{
    id _location;
    CLSLocationCache *_locationCache;
    double _accuracy;
    _Bool _forceQuery;
}

@property _Bool forceQuery;

+ (id)operationWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithLocation:(id)arg1;
+ (id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2;
+ (double)recommendedAccuracy;

- (void)cancel;
- (void)execute;
- (id)initWithLocation:(id)arg1 withAccuracy:(double)arg2;

@end
