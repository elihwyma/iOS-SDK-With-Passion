/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest

{
    MPModelRequest *_modelRequest;
}

@property (retain, nonatomic) MPModelRequest *modelRequest;

+ (Class)responseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)middlewareClasses;

@end
