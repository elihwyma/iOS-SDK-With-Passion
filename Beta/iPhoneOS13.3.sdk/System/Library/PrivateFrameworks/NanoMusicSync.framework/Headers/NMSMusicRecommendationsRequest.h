/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NMSMusicRecommendationsRequest : NSObject

{
    _Bool _useCachedDataOnly;
    NSData *_cachedData;
}

@property (nonatomic) _Bool useCachedDataOnly;
@property (retain, nonatomic) NSData *cachedData;

- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_continueToForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_performForYouRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_continueToLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_performLookupRequestWithModelObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
