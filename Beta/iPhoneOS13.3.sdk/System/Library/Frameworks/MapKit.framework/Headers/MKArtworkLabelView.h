/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKUILabel.h>

@class MKServerFormattedString;

@interface MKArtworkLabelView : _MKUILabel

{
    MKServerFormattedString *_formattedString;
}

@property (retain, nonatomic) MKServerFormattedString *formattedString;

@end
