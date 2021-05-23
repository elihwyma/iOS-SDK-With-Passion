/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class HKCategoryType, HKQuantityType, HKSampleType, NSDate, NSString;

@interface WFHKContentQueryData : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantityType *_quantityType;
    HKCategoryType *_categoryType;
    NSString *_sourceName;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantityType *quantityType;
@property (retain, nonatomic) HKCategoryType *categoryType;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (retain, nonatomic) NSString *sourceName;

@end
