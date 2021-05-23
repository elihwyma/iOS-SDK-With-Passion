/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPFetchDefaultContainerOperation : FPActionOperation

{
    NSString *_defaultName;
    NSString *_appIdentifier;
    NSString *_domainIdentifier;
    CDUnknownBlockType _fetchCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType fetchCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (id)initForApplicationProxy:(id)arg1 providerDomain:(id)arg2;

@end
