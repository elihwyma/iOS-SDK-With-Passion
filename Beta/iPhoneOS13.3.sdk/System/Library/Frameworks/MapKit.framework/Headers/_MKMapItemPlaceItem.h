/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKMapItemPlaceItem : NSObject

{
    MKMapItem *_mapItem;
    unsigned long long _options;
    _Bool _isIntermediateMapItem;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) _Bool isIntermediateMapItem;
@property (nonatomic, readonly) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) _Bool isContactPersisted;
@property (nonatomic, readonly) _Bool hasContactOnly;
@property (nonatomic, readonly) unsigned long long options;

+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2;
+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(_Bool)arg3;

- (void)setIsSuggestedFavorite:(_Bool)arg1;

@end
