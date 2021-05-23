/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject

{
    NSArray *_tokens;
    NSString *_string;
    PSIDateFilter *_dateFilter;
}

@property (nonatomic, readonly) unsigned long long numberOfTokens;
@property (copy, nonatomic) PSIDateFilter *dateFilter;
@property (nonatomic, readonly) NSArray *datedTokens;

- (id)description;
- (id)initWithToken:(id)arg1;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
- (id)tokenAtIndex:(unsigned long long)arg1;
- (id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2;
- (id)parseByReplacingTokensInRange:(struct _NSRange)arg1 withTokens:(id)arg2;
- (id)descriptionWithToken:(id)arg1;

@end
