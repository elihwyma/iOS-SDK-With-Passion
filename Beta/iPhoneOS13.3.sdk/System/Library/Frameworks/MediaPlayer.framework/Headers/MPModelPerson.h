/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelPerson : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasSocialPosts;

+ (id)__name_KEY;
+ (id)__hasSocialPosts_KEY;

@end
