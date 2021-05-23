/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKContactPlaceItem : NSObject

{
    MKMapItem *_mapItem;
    CNContact *_contact;
    unsigned long long _options;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) _Bool isIntermediateMapItem;
@property (nonatomic, readonly) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) _Bool isContactPersisted;
@property (nonatomic, readonly) _Bool hasContactOnly;
@property (nonatomic, readonly) unsigned long long options;

+ (id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3;

@end
