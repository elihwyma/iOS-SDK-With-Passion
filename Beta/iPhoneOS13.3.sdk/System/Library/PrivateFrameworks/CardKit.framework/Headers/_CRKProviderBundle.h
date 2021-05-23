/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSBundle.h>

@class NSString;

@protocol CRKProviding;

@interface _CRKProviderBundle : NSBundle

{
    id <CRKProviding> _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (id)provider;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_initializeProviderWithClass:(Class)arg1;

@end
