/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString;

@interface _DKHistogramMO : NSManagedObject

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *streamName;
@property (copy, nonatomic) NSNumber *streamTypeCode;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *customIdentifier;
@property (retain, nonatomic) NSSet *value;

+ (id)fetchRequest;

@end
