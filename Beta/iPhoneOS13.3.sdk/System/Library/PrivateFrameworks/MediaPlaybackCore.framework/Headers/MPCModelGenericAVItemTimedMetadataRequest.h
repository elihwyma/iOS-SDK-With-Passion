/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelRequest.h>

@class ICStoreRequestContext, MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest

{
    MPCModelGenericAVItemTimedMetadataResponse *_previousResponse;
    MPModelGenericObject *_genericObject;
    ICStoreRequestContext *_storeRequestContext;
    NSArray *_timedMetadataGroups;
}

@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse;
@property (nonatomic, readonly) MPModelGenericObject *genericObject;
@property (copy, nonatomic, readonly) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic, readonly) NSArray *timedMetadataGroups;

+ (_Bool)supportsSecureCoding;
+ (id)metadataIdentifiers;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3;

@end
