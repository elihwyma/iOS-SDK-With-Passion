/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapItemAttribution, NSString;

@protocol GEOPictureItemContainer, GEOTextItemContainer;

@protocol GEOAnnotatedItemList

@property (nonatomic, readonly) id <GEOPictureItemContainer> pictureItemContainer;
@property (nonatomic, readonly) id <GEOTextItemContainer> textItemContainer;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int annotatedItemStyle;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;

@end
