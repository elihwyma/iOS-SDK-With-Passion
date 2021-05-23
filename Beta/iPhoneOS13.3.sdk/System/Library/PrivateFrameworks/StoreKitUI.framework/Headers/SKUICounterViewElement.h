/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSDate, NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUICounterViewElement : SKUIViewElement

{
    double _changeRatePerSecond;
    long long _counterType;
    long long _dateFormatType;
    NSDate *_endDate;
    NSString *_numberFormat;
    long long _startValue;
    NSDate *_startValueDate;
    long long _stopValue;
}

@property (nonatomic, readonly) long long counterType;
@property (nonatomic, readonly) SKUIImageViewElement *backgroundImageElement;
@property (nonatomic, readonly) long long dateFormatType;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double changeRatePerSecond;
@property (nonatomic, readonly) NSString *numberFormat;
@property (nonatomic, readonly) NSDate *startValueDate;
@property (nonatomic, readonly) long long startValue;
@property (nonatomic, readonly) long long stopValue;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)currentNumberValue;

@end
