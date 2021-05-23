/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCWatchedStock : NSObject

{
    NSString *_name;
    NSString *_shortName;
    NSString *_symbol;
    NSString *_exchange;
    NSString *_displaySymbol;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSString *symbol;
@property (copy, nonatomic, readonly) NSString *exchange;
@property (copy, nonatomic, readonly) NSString *displaySymbol;

+ (id)watchedStockWithSymbol:(id)arg1 name:(id)arg2 exchange:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 displaySymbol:(id)arg5;
- (id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4;

@end
