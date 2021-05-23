/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface WFHKGroupingConfiguration : NSObject

{
    _Bool _fillMissing;
    long long _groupingOption;
    NSDate *_queryStartDate;
    NSDate *_queryEndDate;
}

@property (nonatomic) long long groupingOption;
@property (nonatomic) _Bool fillMissing;
@property (retain, nonatomic) NSDate *queryStartDate;
@property (retain, nonatomic) NSDate *queryEndDate;

@end
