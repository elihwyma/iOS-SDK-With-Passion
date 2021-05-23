/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataPendingRequestManager : NSObject

{
    NSMutableDictionary *_requestHandlersPending;
}

- (id)init;
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)_cleanUpFinishedHandlers:(id)arg1;
- (void)willUpdateExpiredIdentifiers:(id)arg1;
- (id)identifiersRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2;
- (void)didResolveItems:(id)arg1;
- (void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2;

@end
