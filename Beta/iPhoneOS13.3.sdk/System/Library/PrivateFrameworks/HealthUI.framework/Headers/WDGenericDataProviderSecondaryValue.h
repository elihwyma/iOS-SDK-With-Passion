/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface WDGenericDataProviderSecondaryValue : NSObject

{
    NSNumber *_average;
    NSDate *_date;
    NSString *_formatString;
}

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *formatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithAverage:(id)arg1;

@end
