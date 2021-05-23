/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson

@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) long long curatorKind;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock;
@property (copy, nonatomic) CDUnknownBlockType brandLogoArtworkCatalogBlock;
@property (copy, nonatomic) NSString *handle;

+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortName_KEY;
+ (id)__curatorKind_KEY;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__handle_KEY;

- (id)editorialArtworkCatalog;
- (id)brandLogoArtworkCatalog;

@end
