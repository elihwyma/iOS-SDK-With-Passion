/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MPModelTVShowCreator *creator;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;

+ (id)__title_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__tagline_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__episodesCount_KEY;
+ (id)kindWithSeasonKind:(id)arg1;
+ (id)__shortTitle_KEY;
+ (id)__creator_KEY;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
