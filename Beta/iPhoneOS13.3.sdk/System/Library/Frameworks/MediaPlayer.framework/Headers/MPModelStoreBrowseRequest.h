/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequest.h>

@class MPModelStoreBrowseResponse, NSURL;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest

{
    NSURL *_loadAdditionalContentURL;
    MPModelStoreBrowseResponse *_previousRetrievedNestedResponse;
    long long _domain;
    long long _filteringPolicy;
    MPModelStoreBrowseResponse *_previousResponse;
    long long _requestEndpoint;
}

@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (nonatomic) long long domain;
@property (nonatomic) long long filteringPolicy;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic) long long requestEndpoint;

+ (_Bool)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)configureWithParentSection:(id)arg1;

@end
