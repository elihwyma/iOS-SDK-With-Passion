/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataProvider : NSObject

{
    _Bool _isLoading;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _errorHandler;
}

@property (nonatomic) _Bool isLoading;
@property (copy, nonatomic) CDUnknownBlockType finishedHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;

- (void)dealloc;
- (void)cancelRequest;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)cancelProviderRequest;
- (void)requestCompleted;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;
- (void)providerDidCancel;

@end
