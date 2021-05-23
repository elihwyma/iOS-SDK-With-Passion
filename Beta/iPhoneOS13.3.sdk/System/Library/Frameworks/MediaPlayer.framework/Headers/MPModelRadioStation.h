/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelRadioStation : MPModelObject

@property (nonatomic, getter=isBeats1) _Bool beats1;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) _Bool hasExplicitContent;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (nonatomic) _Bool allowsItemLiking;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *attributionLabel;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__beats1_KEY;
+ (id)__name_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__allowsItemLiking_KEY;
+ (id)__type_KEY;
+ (id)__subtype_KEY;
+ (id)__attributionLabel_KEY;
+ (id)__providerName_KEY;
+ (id)__subscriptionRequired_KEY;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)contentItemCollectionInfo;

@end
