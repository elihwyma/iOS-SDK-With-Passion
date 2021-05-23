/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface FCCheckArticleStatusOperation : FCOperation

{
    CDUnknownBlockType _checkStatusCompletion;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FCCloudContext *_context;
    NSString *_articleID;
    long long _resultStatus;
}

@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) long long resultStatus;
@property (copy) CDUnknownBlockType checkStatusCompletion;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;

@end
