/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor, _MKMapItemAttribution;

@interface MKPlaceCardActionItem : NSObject

{
    _Bool _enabled;
    _Bool _selected;
    NSString *_displayString;
    unsigned long long _type;
    NSArray *_urlStrings;
    _MKMapItemAttribution *_attribution;
    NSString *_glyph;
    UIColor *_glyphColor;
    MKPlaceCardActionItem *_selectedItem;
    id _value;
}

@property (copy, nonatomic, readonly) NSString *displayString;
@property (copy, nonatomic) NSString *glyph;
@property (retain, nonatomic) UIColor *glyphColor;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool selected;
@property (nonatomic, readonly) NSArray *urlStrings;
@property (retain, nonatomic) _MKMapItemAttribution *attribution;
@property (retain, nonatomic) MKPlaceCardActionItem *selectedItem;
@property (retain, nonatomic) id value;

- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(_Bool)arg3;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(_Bool)arg3 urlStrings:(id)arg4 attribution:(id)arg5;

@end
