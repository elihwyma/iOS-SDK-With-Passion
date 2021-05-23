/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsCore/FCOperation.h>

@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;

@protocol FCNewsAppConfigurationManager;

@interface NUEmbedConfigurationOperation : FCOperation

{
    CDUnknownBlockType _completion;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    NUEmbedConfigurationOperationResult *_result;
}

@property (retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) NUEmbedConfigurationOperationResult *result;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

@end
