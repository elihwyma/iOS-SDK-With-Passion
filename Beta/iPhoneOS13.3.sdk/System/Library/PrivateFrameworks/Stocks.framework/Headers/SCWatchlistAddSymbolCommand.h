/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCWatchlistAddSymbolCommand : NSObject

{
    NSString *_symbol;
}

@property (copy, nonatomic, readonly) NSString *symbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (void)executeWithZone:(id)arg1;

@end
