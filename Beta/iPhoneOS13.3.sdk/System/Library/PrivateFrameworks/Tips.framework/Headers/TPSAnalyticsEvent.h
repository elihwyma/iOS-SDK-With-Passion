/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, TPSAnalyticsDataProvider;

@interface TPSAnalyticsEvent : NSObject

{
    TPSAnalyticsDataProvider *_dataProvider;
    NSDate *_date;
    NSString *_deliveryInfoVersion;
}

@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *deliveryInfoVersion;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)_discoverabilityStream;
- (id)duetEvent;

@end
