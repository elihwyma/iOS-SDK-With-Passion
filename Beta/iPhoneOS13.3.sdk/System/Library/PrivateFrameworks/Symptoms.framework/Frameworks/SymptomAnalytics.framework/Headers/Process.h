/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <CoreData/NSManagedObject.h>

@class LiveUsage, NSDate, NSSet, NSString;

@interface Process : NSManagedObject

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSSet *hasLiveUsage;
@property (retain, nonatomic) LiveUsage *hintLiveUsage;

+ (id)fetchRequest;
+ (id)entityName;

@end
