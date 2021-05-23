/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, UIColor, UIImage;

@interface STUsageItem : NSObject

{
    NSString *_identifier;
    NSString *_budgetItemIdentifier;
    NSString *_categoryIdentifier;
    unsigned long long _itemType;
    UIColor *_color;
    unsigned long long _timePeriod;
    NSDate *_startDate;
    NSNumber *_totalUsage;
    NSNumber *_maxUsage;
    NSNumber *_minUsage;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *budgetItemIdentifier;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) unsigned long long timePeriod;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSNumber *totalUsage;
@property (copy, nonatomic) NSNumber *maxUsage;
@property (copy, nonatomic) NSNumber *minUsage;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
