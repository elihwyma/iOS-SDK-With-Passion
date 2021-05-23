/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, SFFlow;

@interface SFLiveFlowPerf : NSManagedObject

@property (copy, nonatomic) NSNumber *connAttempts;
@property (copy, nonatomic) NSNumber *connSuccesses;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *overallTime;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *timesThresholded;
@property (copy, nonatomic) NSString *tmpID;
@property (copy, nonatomic) NSNumber *txFailPackets;
@property (copy, nonatomic) NSNumber *txPackets;
@property (copy, nonatomic) NSNumber *txReTxInterval;
@property (copy, nonatomic) NSNumber *txReTxPackets;
@property (copy, nonatomic) NSNumber *usecsEstabTime;
@property (retain, nonatomic) SFFlow *hasFlow;

+ (id)fetchRequest;
+ (id)entityName;

@end
