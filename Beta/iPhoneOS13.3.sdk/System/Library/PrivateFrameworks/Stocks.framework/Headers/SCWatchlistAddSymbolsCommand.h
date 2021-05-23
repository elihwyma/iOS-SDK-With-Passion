/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCWatchlistAddSymbolsCommand : NSObject

{
    NSArray *_symbols;
}

@property (copy, nonatomic, readonly) NSArray *symbols;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1;
- (void)executeWithZone:(id)arg1;

@end
