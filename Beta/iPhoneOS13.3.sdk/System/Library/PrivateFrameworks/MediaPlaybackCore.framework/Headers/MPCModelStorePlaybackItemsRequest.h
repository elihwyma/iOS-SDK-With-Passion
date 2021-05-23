/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelRequest.h>

@class MPCPlaybackRequestEnvironment, MPModelResponse, MPSectionedCollection, NSArray, NSString;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest

{
    _Bool _shouldBatchResultsWithPlaceholderObjects;
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    _Bool _allowLocalEquivalencies;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelResponse *_previousResponse;
    NSString *_clientIdentifier;
    MPSectionedCollection *_sectionedModelObjects;
    NSArray *_storeIDs;
    NSArray *_playbackPrioritizedIndexPaths;
}

@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) _Bool shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) _Bool allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic, readonly) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (_Bool)supportsSecureCoding;
+ (_Bool)requiresNetwork;
+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
