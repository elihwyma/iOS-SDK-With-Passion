/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <Foundation/NSObject.h>

@class INInteraction, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol INUICKPViewControllerAllocatingDelegate;

@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject

{
    Class _synchronousRemoteViewControllerClass;
    _Bool _requiresUserConsent;
    id <INUICKPViewControllerAllocatingDelegate> delegate;
    NSMutableArray *_mutableSynchronousRemoteViewControllers;
    INInteraction *_interaction;
    NSMutableArray *_finalInterfaceSections;
    NSMutableSet *_handledParameters;
    NSMutableDictionary *_mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
    NSMutableArray *_mutableRedundantInterfaceSections;
}

@property (nonatomic, readonly) NSMutableArray *mutableSynchronousRemoteViewControllers;
@property (retain, nonatomic) INInteraction *interaction;
@property (nonatomic, readonly) NSMutableArray *finalInterfaceSections;
@property (nonatomic, readonly) NSMutableSet *handledParameters;
@property (nonatomic, readonly) NSMutableDictionary *mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
@property (nonatomic, readonly) NSMutableArray *mutableRedundantInterfaceSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool requiresUserConsent;
@property (copy, nonatomic, readonly) NSArray *allocatedViewControllers;
@property (copy, nonatomic, readonly) NSDictionary *viewControllersByInitialInterfaceSection;
@property (copy, nonatomic, readonly) NSArray *redundantInterfaceSections;
@property (weak, nonatomic) id <INUICKPViewControllerAllocatingDelegate> delegate;

- (id)init;
- (double)boundingWidthForSynchronousRemoteViewController:(id)arg1;
- (id)organizedInterfaceSections;
- (void)setSynchronousRemoteViewControllerClass:(Class)arg1;
- (void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_recursivelyConnectForInterfaceSectionQueue:(id)arg1 recursionDepth:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_unhandledParametersForInterfaceSection:(id)arg1;

@end
