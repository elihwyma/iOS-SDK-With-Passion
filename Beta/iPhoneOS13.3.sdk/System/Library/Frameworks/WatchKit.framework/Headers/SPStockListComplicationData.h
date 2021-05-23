/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/SPComplicationData.h>

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData

{
    NSArray *_stockList;
}

@property (retain, nonatomic) NSArray *stockList;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
