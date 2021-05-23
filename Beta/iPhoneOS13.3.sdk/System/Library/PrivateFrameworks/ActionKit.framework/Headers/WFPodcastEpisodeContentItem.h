/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFPodcastEpisodeContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)episode;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)preferredFileType;
- (id)getArtworkURLForSize:(struct CGSize)arg1 type:(id)arg2;
- (void)getArtworkDataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
