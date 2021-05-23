/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, SFApp;

@interface SFAppCalendarUsage : NSManagedObject

@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSNumber *tier1;
@property (copy, nonatomic) NSNumber *tier2;
@property (copy, nonatomic) NSNumber *tier3;
@property (copy, nonatomic) NSNumber *tier4;
@property (copy, nonatomic) NSNumber *tier5;
@property (copy, nonatomic) NSNumber *timeOfDaySlot;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (retain, nonatomic) SFApp *hintedBy;

+ (id)fetchRequest;
+ (id)entityName;

@end
