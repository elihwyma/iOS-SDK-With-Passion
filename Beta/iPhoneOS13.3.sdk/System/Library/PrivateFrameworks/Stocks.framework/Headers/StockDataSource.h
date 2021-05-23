/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface StockDataSource : NSObject

{
    long long _identifier;
    NSString *_name;
    NSString *_sourceDescription;
}

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sourceDescription;
@property (nonatomic, readonly) NSString *localizedSourceDescription;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)archiveDictionary;

@end
