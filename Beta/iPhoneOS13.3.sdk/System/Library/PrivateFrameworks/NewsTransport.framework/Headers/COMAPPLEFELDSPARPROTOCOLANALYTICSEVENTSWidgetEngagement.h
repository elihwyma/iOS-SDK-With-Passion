/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement : PBCodable

{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_engagementTargetUrl;
    NSMutableArray *_otherVisibleSections;
    NSString *_sourceChannelId;
    NSString *_webEmbedId;
    int _widgetArticleCount;
    int _widgetArticleCountInSection;
    int _widgetArticleRank;
    int _widgetArticleRankInSection;
    int _widgetContentType;
    int _widgetEngagementType;
    int _widgetSectionDisplayRank;
    NSString *_widgetSectionId;
    NSString *_widgetUserId;
    int _widgetVideoPresentationReason;
    CDStruct_de6d94e7 _has;
}

@property (nonatomic) _Bool hasWidgetEngagementType;
@property (nonatomic) int widgetEngagementType;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic, readonly) _Bool hasWidgetSectionId;
@property (retain, nonatomic) NSString *widgetSectionId;
@property (nonatomic) _Bool hasWidgetSectionDisplayRank;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic) _Bool hasWidgetArticleRankInSection;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) _Bool hasWidgetArticleRank;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) _Bool hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (retain, nonatomic) NSMutableArray *otherVisibleSections;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) _Bool hasWidgetVideoPresentationReason;
@property (nonatomic) int widgetVideoPresentationReason;
@property (nonatomic) _Bool hasWidgetArticleCountInSection;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic, readonly) _Bool hasWidgetUserId;
@property (retain, nonatomic) NSString *widgetUserId;
@property (nonatomic) _Bool hasWidgetContentType;
@property (nonatomic) int widgetContentType;
@property (nonatomic, readonly) _Bool hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic, readonly) _Bool hasEngagementTargetUrl;
@property (retain, nonatomic) NSString *engagementTargetUrl;

+ (Class)otherVisibleSectionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addOtherVisibleSections:(id)arg1;
- (void)clearOtherVisibleSections;
- (unsigned long long)otherVisibleSectionsCount;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)arg1;
- (id)widgetVideoPresentationReasonAsString:(int)arg1;
- (int)StringAsWidgetVideoPresentationReason:(id)arg1;
- (id)widgetContentTypeAsString:(int)arg1;
- (int)StringAsWidgetContentType:(id)arg1;
- (id)widgetEngagementTypeAsString:(int)arg1;
- (int)StringAsWidgetEngagementType:(id)arg1;

@end
