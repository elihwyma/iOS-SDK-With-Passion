/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <NSObject.h>

@class NSString, SUICKPCardViewControllerProvider;

@interface SUICKPEntryPoint : NSObject

{
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (id)init;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
