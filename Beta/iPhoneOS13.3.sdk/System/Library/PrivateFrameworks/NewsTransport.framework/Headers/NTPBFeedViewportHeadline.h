/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable

{
    CDStruct_95bda58d _surfacedByTagIDsRefs;
    double _tileProminenceScore;
    NSString *_articleID;
    NSString *_callToActionText;
    NSString *_clusterID;
    NTPBDate *_displayDate;
    int _storyType;
    int _surfacedByBinIDRef;
    int _surfacedByChannelIDRef;
    int _surfacedBySectionIDRef;
    int _surfacedByTopicIDRef;
    int _topStoryType;
    _Bool _usesImageOnTopLayout;
    struct {
        unsigned int tileProminenceScore:1;
        unsigned int storyType:1;
        unsigned int surfacedByBinIDRef:1;
        unsigned int surfacedByChannelIDRef:1;
        unsigned int surfacedBySectionIDRef:1;
        unsigned int surfacedByTopicIDRef:1;
        unsigned int topStoryType:1;
        unsigned int usesImageOnTopLayout:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) _Bool hasSurfacedBySectionIDRef;
@property (nonatomic) int surfacedBySectionIDRef;
@property (nonatomic) _Bool hasSurfacedByChannelIDRef;
@property (nonatomic) int surfacedByChannelIDRef;
@property (nonatomic) _Bool hasSurfacedByTopicIDRef;
@property (nonatomic) int surfacedByTopicIDRef;
@property (nonatomic) _Bool hasSurfacedByBinIDRef;
@property (nonatomic) int surfacedByBinIDRef;
@property (nonatomic) _Bool hasTopStoryType;
@property (nonatomic) int topStoryType;
@property (nonatomic) _Bool hasTileProminenceScore;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic) _Bool hasUsesImageOnTopLayout;
@property (nonatomic) _Bool usesImageOnTopLayout;
@property (nonatomic, readonly) unsigned long long surfacedByTagIDsRefsCount;
@property (nonatomic, readonly) int *surfacedByTagIDsRefs;
@property (nonatomic, readonly) _Bool hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (nonatomic) _Bool hasStoryType;
@property (nonatomic) int storyType;
@property (nonatomic, readonly) _Bool hasDisplayDate;
@property (retain, nonatomic) NTPBDate *displayDate;
@property (nonatomic, readonly) _Bool hasCallToActionText;
@property (retain, nonatomic) NSString *callToActionText;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)surfacedByTagIDsRefsAtIndex:(unsigned long long)arg1;
- (void)addSurfacedByTagIDsRefs:(int)arg1;
- (void)clearSurfacedByTagIDsRefs;
- (void)setSurfacedByTagIDsRefs:(int *)arg1 count:(unsigned long long)arg2;

@end
