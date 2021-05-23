/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBCardStyle, NTPBColor, NTPBColorGradient, NTPBDate, NTPBDiscoverMoreVideosInfo;

@interface NTPBFeedViewportGroup : PBCodable

{
    CDStruct_95bda58d _assetURLStringRefs;
    unsigned long long _mergeID;
    unsigned long long _options;
    NTPBColorGradient *_backgroundGradient;
    NSString *_bridgedGroupIdentifier;
    NTPBCardStyle *_cardStyle;
    NTPBDate *_creationDate;
    int _ctaTextRef;
    NTPBCardStyle *_darkCardStyle;
    NTPBColorGradient *_darkStyleBackgroundGradient;
    NTPBColor *_darkStyleTitleColor;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBDate *_editionFeedEndDate;
    NTPBDate *_editionFeedStartDate;
    NTPBDate *_editionKeyDate;
    int _eyebrowTextRef;
    NSMutableArray *_headlines;
    NSString *_identifier;
    NSMutableArray *_issueIDs;
    int _l2TagIDRef;
    int _sourceIdentifierRef;
    int _subtitleRef;
    NTPBColor *_titleColor;
    int _titleRef;
    int _type;
    NSMutableArray *_videoPlaylistHeadlines;
    _Bool _isFirstFromEdition;
    _Bool _usesPlaceholderHeadlines;
    struct {
        unsigned int mergeID:1;
        unsigned int options:1;
        unsigned int ctaTextRef:1;
        unsigned int eyebrowTextRef:1;
        unsigned int l2TagIDRef:1;
        unsigned int sourceIdentifierRef:1;
        unsigned int subtitleRef:1;
        unsigned int titleRef:1;
        unsigned int type:1;
        unsigned int isFirstFromEdition:1;
        unsigned int usesPlaceholderHeadlines:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasSourceIdentifierRef;
@property (nonatomic) int sourceIdentifierRef;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasCreationDate;
@property (retain, nonatomic) NTPBDate *creationDate;
@property (nonatomic) _Bool hasTitleRef;
@property (nonatomic) int titleRef;
@property (nonatomic) _Bool hasSubtitleRef;
@property (nonatomic) int subtitleRef;
@property (nonatomic, readonly) _Bool hasTitleColor;
@property (retain, nonatomic) NTPBColor *titleColor;
@property (nonatomic, readonly) _Bool hasBackgroundGradient;
@property (retain, nonatomic) NTPBColorGradient *backgroundGradient;
@property (nonatomic) _Bool hasL2TagIDRef;
@property (nonatomic) int l2TagIDRef;
@property (retain, nonatomic) NSMutableArray *headlines;
@property (nonatomic) _Bool hasMergeID;
@property (nonatomic) unsigned long long mergeID;
@property (nonatomic) _Bool hasOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) _Bool hasEditionKeyDate;
@property (retain, nonatomic) NTPBDate *editionKeyDate;
@property (nonatomic, readonly) _Bool hasEditionFeedStartDate;
@property (retain, nonatomic) NTPBDate *editionFeedStartDate;
@property (nonatomic, readonly) _Bool hasEditionFeedEndDate;
@property (retain, nonatomic) NTPBDate *editionFeedEndDate;
@property (nonatomic) _Bool hasIsFirstFromEdition;
@property (nonatomic) _Bool isFirstFromEdition;
@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosInfo;
@property (retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (retain, nonatomic) NSMutableArray *videoPlaylistHeadlines;
@property (retain, nonatomic) NSMutableArray *issueIDs;
@property (nonatomic, readonly) _Bool hasBridgedGroupIdentifier;
@property (retain, nonatomic) NSString *bridgedGroupIdentifier;
@property (nonatomic) _Bool hasEyebrowTextRef;
@property (nonatomic) int eyebrowTextRef;
@property (nonatomic) _Bool hasCtaTextRef;
@property (nonatomic) int ctaTextRef;
@property (nonatomic, readonly) _Bool hasDarkStyleTitleColor;
@property (retain, nonatomic) NTPBColor *darkStyleTitleColor;
@property (nonatomic, readonly) _Bool hasDarkStyleBackgroundGradient;
@property (retain, nonatomic) NTPBColorGradient *darkStyleBackgroundGradient;
@property (nonatomic, readonly) _Bool hasCardStyle;
@property (retain, nonatomic) NTPBCardStyle *cardStyle;
@property (nonatomic, readonly) _Bool hasDarkCardStyle;
@property (retain, nonatomic) NTPBCardStyle *darkCardStyle;
@property (nonatomic, readonly) unsigned long long assetURLStringRefsCount;
@property (nonatomic, readonly) int *assetURLStringRefs;
@property (nonatomic) _Bool hasUsesPlaceholderHeadlines;
@property (nonatomic) _Bool usesPlaceholderHeadlines;

+ (Class)issueIDsType;
+ (Class)headlinesType;
+ (Class)videoPlaylistHeadlinesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)assetURLStringRefAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (void)addHeadlines:(id)arg1;
- (void)addVideoPlaylistHeadlines:(id)arg1;
- (void)addAssetURLStringRef:(int)arg1;
- (void)addIssueIDs:(id)arg1;
- (void)clearIssueIDs;
- (unsigned long long)issueIDsCount;
- (id)issueIDsAtIndex:(unsigned long long)arg1;
- (void)clearHeadlines;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (void)clearVideoPlaylistHeadlines;
- (unsigned long long)videoPlaylistHeadlinesCount;
- (id)videoPlaylistHeadlinesAtIndex:(unsigned long long)arg1;
- (void)clearAssetURLStringRefs;
- (void)setAssetURLStringRefs:(int *)arg1 count:(unsigned long long)arg2;

@end
