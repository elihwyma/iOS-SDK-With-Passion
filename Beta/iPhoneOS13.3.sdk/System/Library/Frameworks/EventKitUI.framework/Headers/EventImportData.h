/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKStructuredLocation, NSData, NSDate, NSString, NSURL;

@interface EventImportData : NSObject

{
    _Bool _prefersManagedCalendar;
    int _requestedAction;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSURL *_URL;
    NSString *_notes;
    NSData *_icsData;
    NSString *_uniqueId;
    EKStructuredLocation *_structuredLocation;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSData *icsData;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) int requestedAction;
@property (nonatomic) _Bool prefersManagedCalendar;

+ (id)acceptedTypeIdentifiers;
+ (_Bool)isSessionManaged:(id)arg1;
+ (id)eventImportDataFromData:(id)arg1 forType:(id)arg2;
+ (id)_extractEventDataFromSpotlightIdentifier:(id)arg1;
+ (id)_extractEventDataFromEventICSData:(id)arg1;
+ (id)_extractEventDataFromReminderICSData:(id)arg1;
+ (id)_extractEventDataFromURL:(id)arg1;
+ (id)_extractEventDataFromUTF8StringData:(id)arg1;
+ (id)_extractEventDataFromMapKitItemData:(id)arg1;
+ (void)extractEventImportDataFromDropSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)itemContainsCalendarICSData:(id)arg1;

- (id)init;

@end
