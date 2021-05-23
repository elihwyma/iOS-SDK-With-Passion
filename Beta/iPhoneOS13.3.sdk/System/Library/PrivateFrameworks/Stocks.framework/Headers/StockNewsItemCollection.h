/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface StockNewsItemCollection : NSObject

{
    NSArray *_newsItems;
    double _expirationTime;
}

@property (retain, nonatomic) NSArray *newsItems;
@property (nonatomic) double expirationTime;

- (id)initWithArchiveArray:(id)arg1;
- (id)archiveArray;

@end
