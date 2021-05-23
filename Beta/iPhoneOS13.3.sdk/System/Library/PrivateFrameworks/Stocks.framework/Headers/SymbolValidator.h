/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest

{
    NSArray *_symbols;
    id _delegate;
}

@property (weak, nonatomic) id delegate;

- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)didParseData;
- (id)aggregateDictionaryDomain;
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;

@end
