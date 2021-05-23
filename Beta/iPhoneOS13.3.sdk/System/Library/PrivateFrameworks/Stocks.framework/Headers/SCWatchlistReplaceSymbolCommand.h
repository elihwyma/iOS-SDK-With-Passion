/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject

{
    NSString *_oldSymbol;
    NSString *_replacementSymbol;
}

@property (copy, nonatomic, readonly) NSString *oldSymbol;
@property (copy, nonatomic, readonly) NSString *replacementSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2;
- (void)executeWithZone:(id)arg1;

@end
