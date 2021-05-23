/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface SFProvisioningData : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *map;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSDate *timeStamp;

+ (id)fetchRequest;
+ (id)entityName;

@end
