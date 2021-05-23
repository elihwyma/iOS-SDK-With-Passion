/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, MPModelStoreBrowseContentItemBuilder, MPModelStoreBrowseSectionBuilder, MPSectionedCollection, NSIndexSet;

@interface MPModelStoreBrowseMusicKitResponseParser : NSObject

{
    long long _parseOnceToken;
    id _rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
}

@property (nonatomic, readonly) MPSectionedCollection *results;

- (id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5;
- (id)_parsedSectionedCollection;
- (id)_parsedEditorialElements:(id)arg1;
- (id)_parsedEditorialElement:(id)arg1;
- (_Bool)isContentNodeAnEditorialElement:(id)arg1;
- (id)_parsedContentNode:(id)arg1 uniformContentItemTypeResolver:(id)arg2;

@end
