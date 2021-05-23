/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSURL;

@interface MPModelStaticAsset : MPModelObject

@property (nonatomic) double duration;
@property (nonatomic) long long flavorType;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSURL *url;

+ (id)__duration_KEY;
+ (id)__flavorType_KEY;
+ (id)__mediaType_KEY;
+ (id)__url_KEY;

@end
