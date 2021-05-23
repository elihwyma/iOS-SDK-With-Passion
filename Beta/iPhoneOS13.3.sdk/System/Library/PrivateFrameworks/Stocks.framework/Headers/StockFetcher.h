/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, SymbolValidator;

@interface StockFetcher : NSObject

{
    double _timeoutDuration;
    SymbolValidator *_validator;
    CDUnknownBlockType _completionHandler;
    NSTimer *_timeoutTimer;
}

@property (retain) SymbolValidator *validator;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property double timeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithValidator:(id)arg1;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanUpAndReportResult:(id)arg1;
- (void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)remoteFetchTimedOut;

@end
