/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSSet, NSString;

@interface SFNetworkAttachment : NSManagedObject

@property (copy, nonatomic) NSNumber *attrs;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool isHotSpot;
@property (nonatomic) _Bool isKnownGood;
@property (nonatomic) _Bool isLowInternetDL;
@property (nonatomic) _Bool isLowInternetUL;
@property (copy, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSData *netSignature;
@property (copy, nonatomic) NSNumber *overallStayMean;
@property (copy, nonatomic) NSNumber *overallStayVar;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *velo;
@property (nonatomic) _Bool wasLastFailed;
@property (retain, nonatomic) NSSet *hasDefaultRoute;
@property (retain, nonatomic) NSSet *supportsFlows;

+ (id)fetchRequest;
+ (id)entityName;

@end
