/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPStoreLibraryPersonalizationResponse, NSDate, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_source;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse

{
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _finalResponse;
    _Bool _invalidForPersonalization;
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    NSDictionary *_localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    NSDate *_invalidationDate;
}

@property (nonatomic, readonly, getter=isInvalidForPersonalization) _Bool invalidForPersonalization;
@property (copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (nonatomic, readonly) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (nonatomic, getter=isFinalResponse) _Bool finalResponse;
@property (copy, nonatomic) NSDate *invalidationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_activeUserDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;

@end
