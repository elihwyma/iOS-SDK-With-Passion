/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PXPeopleBootstrapContext, UIViewController;

@protocol PXPeopleBootstrapFlowDelegate, PXPeopleFlowViewController, PXPeopleSuggestionManagerDataSource;

@interface PXPeopleBootstrapFlowController : NSObject

{
    id <PXPeopleBootstrapFlowDelegate> _bootstrapDelegate;
    id <PXPeopleSuggestionManagerDataSource> _bootstrapDataSource;
    PXPeopleBootstrapContext *_context;
    unsigned long long _namingResultType;
    NSArray *_viewControllers;
    unsigned long long _viewControllerIndex;
}

@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) unsigned long long viewControllerIndex;
@property (retain, nonatomic) id <PXPeopleBootstrapFlowDelegate> bootstrapDelegate;
@property (retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> bootstrapDataSource;
@property (nonatomic, readonly) PXPeopleBootstrapContext *context;
@property (nonatomic, readonly) _Bool shouldPresentNaming;
@property (nonatomic, readonly) _Bool shouldPresentPostNaming;
@property (nonatomic) unsigned long long namingResultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasNextViewController;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (nonatomic, readonly) _Bool hasPreviousViewController;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *previousViewController;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithContext:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)commonInitWithContext:(id)arg1;
- (id)initEmptyFlowWithContext:(id)arg1;

@end
