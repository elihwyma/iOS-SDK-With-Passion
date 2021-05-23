/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray;

@protocol FCContentContext;

@interface FCCurrentIssuesFetchOperation : FCOperation

{
    FCCachePolicy *_cachePolicy;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSArray *_resultIssues;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (id)initWithContext:(id)arg1;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
