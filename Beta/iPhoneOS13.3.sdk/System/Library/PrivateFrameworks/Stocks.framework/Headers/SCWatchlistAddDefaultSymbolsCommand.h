/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject

{
    _Bool _deferUpload;
    NSArray *_symbols;
}

@property (copy, nonatomic, readonly) NSArray *symbols;
@property (nonatomic, readonly) _Bool deferUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1 deferUpload:(_Bool)arg2;
- (void)executeWithZone:(id)arg1;
- (_Bool)shouldDeferUpload;

@end
