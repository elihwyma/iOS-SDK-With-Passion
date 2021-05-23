/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject

{
    GEOMapRequestManager *_requestManager;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancellationHandler;
    _Bool _isFinished;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property (nonatomic, readonly) _Bool isFinished;

- (void)dealloc;
- (void)cancel;
- (id)initWithManager:(id)arg1;
- (void)complete;
- (void)_finishAndCallHandler:(CDUnknownBlockType)arg1;

@end
