/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;

@interface FCTagHeadlinesOperation : FCOperation

{
    FCCloudContext *_context;
    NSString *_tagID;
    unsigned long long _maxHeadlinesCount;
    CDUnknownBlockType _fetchCompletionHandler;
    NSArray *_resultHeadlines;
}

@property (copy) NSArray *resultHeadlines;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *tagID;
@property (nonatomic) unsigned long long maxHeadlinesCount;
@property (copy) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
