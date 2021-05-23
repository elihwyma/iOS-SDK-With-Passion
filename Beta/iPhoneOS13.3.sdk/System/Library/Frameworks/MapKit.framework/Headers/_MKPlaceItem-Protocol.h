/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@protocol _MKPlaceItem

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) _Bool isIntermediateMapItem;
@property (nonatomic, readonly) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) _Bool isContactPersisted;
@property (nonatomic, readonly) _Bool hasContactOnly;
@property (nonatomic, readonly) unsigned long long options;

@end
