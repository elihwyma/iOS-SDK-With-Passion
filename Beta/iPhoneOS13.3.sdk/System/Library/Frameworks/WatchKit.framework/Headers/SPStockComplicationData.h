/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/SPComplicationData.h>

@class NSString;

@interface SPStockComplicationData : SPComplicationData

{
    NSString *_tickerSymbolText;
    NSString *_priceText;
    NSString *_marketCapText;
    NSString *_changeInPercentText;
    NSString *_changeInPointsText;
    NSString *_changeText;
    unsigned long long _changeDirection;
}

@property (retain, nonatomic) NSString *tickerSymbolText;
@property (retain, nonatomic) NSString *priceText;
@property (retain, nonatomic) NSString *marketCapText;
@property (retain, nonatomic) NSString *changeInPercentText;
@property (retain, nonatomic) NSString *changeInPointsText;
@property (retain, nonatomic) NSString *changeText;
@property (nonatomic) unsigned long long changeDirection;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
