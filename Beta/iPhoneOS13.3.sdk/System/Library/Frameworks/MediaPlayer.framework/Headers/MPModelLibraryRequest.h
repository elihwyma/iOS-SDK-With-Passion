/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelRequest.h>

@class MPMediaLibrary, MPMediaQuery, NSArray, NSString;

@interface MPModelLibraryRequest : MPModelRequest

{
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedItemIdentifiers;
    NSArray *_allowedSectionIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPMediaQuery *_legacyMediaQuery;
    struct _NSRange _contentRange;
}

@property (copy, nonatomic) MPMediaQuery *legacyMediaQuery;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic) struct _NSRange contentRange;
@property (nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)itemTranslationContext;
- (id)sectionTranslationContext;

@end
