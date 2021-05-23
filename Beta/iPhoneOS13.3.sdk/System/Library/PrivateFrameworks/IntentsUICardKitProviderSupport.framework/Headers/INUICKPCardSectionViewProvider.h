/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CRCard, CRKCardSectionViewProviderDelegate, INUICKPViewControllerAllocating;

@interface INUICKPCardSectionViewProvider : NSObject

{
    id <CRCard> _card;
    NSArray *_viewConfigurations;
    id <INUICKPViewControllerAllocating> _allocator;
    id <CRKCardSectionViewProviderDelegate> _cardSectionViewProviderDelegate;
}

@property (copy, nonatomic) NSArray *viewConfigurations;
@property (retain, nonatomic) id <INUICKPViewControllerAllocating> allocator;
@property (weak, nonatomic) id <CRKCardSectionViewProviderDelegate> cardSectionViewProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRCard> card;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

+ (void)requestInstanceWithCard:(id)arg1 delegate:(id)arg2 allocator:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (id)_viewConfigurationsFromAllocator:(id)arg1;
+ (void)requestInstanceFromDefaultAllocatorWithCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;

- (_Bool)vetoDisplayOfCardSection:(id)arg1;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (double)boundingWidthForViewControllerAllocator:(id)arg1;

@end
