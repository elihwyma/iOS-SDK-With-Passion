/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelRequest.h>

@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest

{
    MPModelStaticResponse *_staticResponse;
}

@property (retain, nonatomic) MPModelStaticResponse *staticResponse;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
