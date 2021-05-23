/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFActivityIndicatorCardSection, SFAppLinkCardSection, SFAudioPlaybackCardSection, SFButtonCardSection, SFCompactRowCardSection, SFDescriptionCardSection, SFDetailedRowCardSection, SFFlightCardSection, SFHorizontalButtonCardSection, SFHorizontalScrollCardSection, SFImagesCardSection, SFKeyValueDataCardSection, SFMapCardSection, SFMapPlaceCardSection, SFMapsDetailedRowCardSection, SFMediaInfoCardSection, SFMediaPlayerCardSection, SFMediaRemoteControlCardSection, SFMessageCardSection, SFMetaInfoCardSection, SFNowPlayingCardSection, SFProductCardSection, SFRichTitleCardSection, SFRowCardSection, SFScoreboardCardSection, SFSectionHeaderCardSection, SFSelectableGridCardSection, SFSocialMediaPostCardSection, SFStockChartCardSection, SFSuggestionCardSection, SFTableHeaderRowCardSection, SFTableRowCardSection, SFTextColumnsCardSection, SFTitleCardSection, SFTrackListCardSection, SFVerticalLayoutCardSection, SFWatchListCardSection, SFWebCardSection;

@interface SFCardSectionValue : NSObject <Swift>

{
    SFAppLinkCardSection *_appLinkCardSection;
    SFDescriptionCardSection *_descriptionCardSection;
    SFKeyValueDataCardSection *_keyValueDataCardSection;
    SFMapCardSection *_mapCardSection;
    SFMediaInfoCardSection *_mediaInfoCardSection;
    SFMediaPlayerCardSection *_mediaPlayerCardSection;
    SFNowPlayingCardSection *_nowPlayingCardSection;
    SFRichTitleCardSection *_richTitleCardSection;
    SFRowCardSection *_rowCardSection;
    SFScoreboardCardSection *_scoreboardCardSection;
    SFSocialMediaPostCardSection *_socialMediaPostCardSection;
    SFStockChartCardSection *_stockChartCardSection;
    SFTableHeaderRowCardSection *_tableHeaderRowCardSection;
    SFTableRowCardSection *_tableRowCardSection;
    SFTextColumnsCardSection *_textColumnsCardSection;
    SFTitleCardSection *_titleCardSection;
    SFTrackListCardSection *_trackListCardSection;
    SFAudioPlaybackCardSection *_audioPlaybackCardSection;
    SFFlightCardSection *_flightCardSection;
    SFActivityIndicatorCardSection *_activityIndicatorCardSection;
    SFWebCardSection *_webCardSection;
    SFMessageCardSection *_messageCardSection;
    SFDetailedRowCardSection *_detailedRowCardSection;
    SFImagesCardSection *_imagesCardSection;
    SFSuggestionCardSection *_suggestionCardSection;
    SFSelectableGridCardSection *_selectableGridCardSection;
    SFSectionHeaderCardSection *_sectionHeaderCardSection;
    SFMetaInfoCardSection *_metaInfoCardSection;
    SFWatchListCardSection *_watchListCardSection;
    SFMapsDetailedRowCardSection *_mapsDetailedRowCardSection;
    SFButtonCardSection *_buttonCardSection;
    SFHorizontalButtonCardSection *_horizontalButtonCardSection;
    SFVerticalLayoutCardSection *_verticalLayoutCardSection;
    SFProductCardSection *_productCardSection;
    SFHorizontalScrollCardSection *_horizontalScrollCardSection;
    SFMediaRemoteControlCardSection *_mediaRemoteControlCardSection;
    SFMapPlaceCardSection *_mapPlaceCardSection;
    SFCompactRowCardSection *_compactRowCardSection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SFAppLinkCardSection *appLinkCardSection;
@property (retain, nonatomic) SFDescriptionCardSection *descriptionCardSection;
@property (retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection;
@property (retain, nonatomic) SFMapCardSection *mapCardSection;
@property (retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection;
@property (retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection;
@property (retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection;
@property (retain, nonatomic) SFRichTitleCardSection *richTitleCardSection;
@property (retain, nonatomic) SFRowCardSection *rowCardSection;
@property (retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection;
@property (retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection;
@property (retain, nonatomic) SFStockChartCardSection *stockChartCardSection;
@property (retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection;
@property (retain, nonatomic) SFTableRowCardSection *tableRowCardSection;
@property (retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection;
@property (retain, nonatomic) SFTitleCardSection *titleCardSection;
@property (retain, nonatomic) SFTrackListCardSection *trackListCardSection;
@property (retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection;
@property (retain, nonatomic) SFFlightCardSection *flightCardSection;
@property (retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection;
@property (retain, nonatomic) SFWebCardSection *webCardSection;
@property (retain, nonatomic) SFMessageCardSection *messageCardSection;
@property (retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection;
@property (retain, nonatomic) SFImagesCardSection *imagesCardSection;
@property (retain, nonatomic) SFSuggestionCardSection *suggestionCardSection;
@property (retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection;
@property (retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection;
@property (retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection;
@property (retain, nonatomic) SFWatchListCardSection *watchListCardSection;
@property (retain, nonatomic) SFMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property (retain, nonatomic) SFButtonCardSection *buttonCardSection;
@property (retain, nonatomic) SFHorizontalButtonCardSection *horizontalButtonCardSection;
@property (retain, nonatomic) SFVerticalLayoutCardSection *verticalLayoutCardSection;
@property (retain, nonatomic) SFProductCardSection *productCardSection;
@property (retain, nonatomic) SFHorizontalScrollCardSection *horizontalScrollCardSection;
@property (retain, nonatomic) SFMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property (retain, nonatomic) SFMapPlaceCardSection *mapPlaceCardSection;
@property (retain, nonatomic) SFCompactRowCardSection *compactRowCardSection;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
