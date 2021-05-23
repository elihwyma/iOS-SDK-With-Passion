/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class SCWatchlistDefaults;

@interface SCWatchlistInlineDefaultsProvider : NSObject

{
    SCWatchlistDefaults *_defaults;
}

- (id)initWithDefaults:(id)arg1;
- (void)fetchWatchlistDefaultsWithCompletion:(CDUnknownBlockType)arg1;

@end
