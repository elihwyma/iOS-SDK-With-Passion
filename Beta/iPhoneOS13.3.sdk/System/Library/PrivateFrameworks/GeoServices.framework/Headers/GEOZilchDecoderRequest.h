/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOZilchDecoder, NSError, NSObject;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest

{
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>> _mapModel;
    GEOZilchDecoder *_decoder;
    shared_ptr_27244a92 _message;
    CDUnknownBlockType _pathHandler;
    CDUnknownBlockType _errorHandler;
    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property (copy) CDUnknownBlockType pathHandler;
@property (copy) CDUnknownBlockType errorHandler;

- (void)cancel;
- (id).cxx_construct;
- (id)initWithDecoder:(id)arg1 message:(shared_ptr_27244a92)arg2;
- (void)decodeWithPathHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_finishedDecodingWithPath:(Path_7969893c)arg1;

@end
