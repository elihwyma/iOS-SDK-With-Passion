/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <IntentsUICardKitProviderSupport/Swift-Protocol.h>

@class NSArray, NSDictionary;

@protocol INUICKPViewControllerAllocatingDelegate;

@protocol INUICKPViewControllerAllocating <Swift>

@property (nonatomic) _Bool requiresUserConsent;
@property (copy, nonatomic, readonly) NSArray *allocatedViewControllers;
@property (copy, nonatomic, readonly) NSDictionary *viewControllersByInitialInterfaceSection;
@property (copy, nonatomic, readonly) NSArray *redundantInterfaceSections;
@property (weak, nonatomic) id <INUICKPViewControllerAllocatingDelegate> delegate;

- (unsigned short)performAllocationsFromInteraction:initialInterfaceSections:completion: /* Error: Ran out of types for this method. */;

@end
