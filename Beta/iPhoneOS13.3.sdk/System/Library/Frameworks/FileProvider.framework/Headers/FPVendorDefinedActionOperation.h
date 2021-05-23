/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSArray, NSProgress, NSString;

@interface FPVendorDefinedActionOperation : FPActionOperation

{
    NSProgress *_remoteProgress;
    NSString *_actionIdentifier;
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
}

- (void)cancel;
- (void)actionMain;
- (id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3;

@end
