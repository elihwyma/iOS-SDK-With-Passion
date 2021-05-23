/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemAttribution, NSString;

@protocol GEOPictureItemContainer, GEOTextItemContainer;

@interface GEOAnnotatedItemList : NSObject

{
    id <GEOPictureItemContainer> _pictureItemContainer;
    id <GEOTextItemContainer> _textItemContainer;
    NSString *_title;
    int _annotatedItemStyle;
    GEOMapItemAttribution *_attribution;
}

@property (nonatomic, readonly) id <GEOPictureItemContainer> pictureItemContainer;
@property (nonatomic, readonly) id <GEOTextItemContainer> textItemContainer;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int annotatedItemStyle;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;

- (id)init;
- (id)initWithPictureItemContainer:(id)arg1 textItemContainer:(id)arg2 title:(id)arg3 annotatedItemStyle:(int)arg4 attribution:(id)arg5;
- (id)initWithAnnotatedItemList:(id)arg1 attribution:(id)arg2;

@end
