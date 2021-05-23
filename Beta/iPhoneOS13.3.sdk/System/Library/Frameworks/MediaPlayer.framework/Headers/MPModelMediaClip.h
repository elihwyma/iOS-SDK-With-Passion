/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject

@property (copy, nonatomic) CDUnknownBlockType previewArtworkCatalogBlock;
@property (copy, nonatomic) NSArray *staticAssets;
@property (copy, nonatomic) NSString *title;

+ (id)kind;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;

- (id)humanDescription;
- (id)previewArtworkCatalog;

@end
