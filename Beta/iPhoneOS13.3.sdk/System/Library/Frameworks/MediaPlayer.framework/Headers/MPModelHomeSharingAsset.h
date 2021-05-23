/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSURL;

@interface MPModelHomeSharingAsset : MPModelObject

@property (nonatomic, getter=isAvailable) _Bool available;
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL;
@property (copy, nonatomic) NSURL *URL;

+ (id)__available_KEY;
+ (id)__protectedContentSupportStorageFileURL_KEY;
+ (id)__URL_KEY;

@end
