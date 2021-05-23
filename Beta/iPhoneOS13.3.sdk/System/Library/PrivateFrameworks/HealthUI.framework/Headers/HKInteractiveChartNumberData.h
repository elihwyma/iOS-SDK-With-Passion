/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSNumberFormatter, NSString;

@interface HKInteractiveChartNumberData : NSObject

{
    NSNumber *_value;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
