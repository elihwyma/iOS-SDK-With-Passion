/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCSpecialEventsOperationResult, NSError;

@protocol FCCoreConfiguration;

@interface FCSpecialEventsOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCSpecialEventsOperationResult *_specialEventsResult;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
}

@property (retain) FCSpecialEventsOperationResult *specialEventsResult;
@property (retain) NSError *error;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy) CDUnknownBlockType catchUpCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_checkShouldShowBreakingNewsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
