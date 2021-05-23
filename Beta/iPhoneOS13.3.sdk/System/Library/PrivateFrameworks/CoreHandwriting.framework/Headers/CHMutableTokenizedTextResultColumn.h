/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (copy, nonatomic) NSArray *tokenRows;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTokenRows:(id)arg1;
- (long long)addTokenRowWithTokens:(id)arg1;
- (void)sortTokenRows;
- (id)_mutableTokenRows;
- (void)removeTokenRowAtIndex:(long long)arg1;

@end
