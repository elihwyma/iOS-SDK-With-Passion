/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject

{
    NSString *_symbol;
    unsigned long long _toIndex;
}

@property (copy, nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) unsigned long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)executeWithZone:(id)arg1;

@end
