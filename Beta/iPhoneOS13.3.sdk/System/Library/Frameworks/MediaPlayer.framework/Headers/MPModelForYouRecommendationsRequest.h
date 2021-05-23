/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest

{
    long long _filteringPolicy;
    long long _requestEndpoint;
    NSURL *_customForYouURL;
}

@property (nonatomic) long long filteringPolicy;
@property (nonatomic) long long requestEndpoint;
@property (copy, nonatomic) NSURL *customForYouURL;

+ (_Bool)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
