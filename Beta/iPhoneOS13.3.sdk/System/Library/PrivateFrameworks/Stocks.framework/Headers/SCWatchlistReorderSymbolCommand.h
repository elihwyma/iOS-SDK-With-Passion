/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCWatchlistReorderSymbolCommand : NSObject

{
    NSString *_symbol;
    NSString *_precedingSymbol;
}

@property (copy, nonatomic, readonly) NSString *symbol;
@property (copy, nonatomic, readonly) NSString *precedingSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2;
- (void)executeWithZone:(id)arg1;

@end
