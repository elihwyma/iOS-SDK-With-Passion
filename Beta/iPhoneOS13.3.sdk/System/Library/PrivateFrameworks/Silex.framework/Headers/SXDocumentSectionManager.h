/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NFMultiDelegate, NSMutableDictionary, NSMutableSet, NSString, SXViewport;

@protocol SXDocumentSectionHosting;

@interface SXDocumentSectionManager : NSObject

{
    id <SXDocumentSectionHosting> _hosting;
    SXViewport *_viewport;
    NSMutableDictionary *_blueprints;
    NSMutableSet *_visibleViewControllers;
    NFMultiDelegate *_multiScrollDelegate;
}

@property (weak, nonatomic, readonly) id <SXDocumentSectionHosting> hosting;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) NSMutableDictionary *blueprints;
@property (nonatomic, readonly) NSMutableSet *visibleViewControllers;
@property (nonatomic, readonly) NFMultiDelegate *multiScrollDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)view;
- (id)viewController;
- (id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3;
- (double)heightForBlueprint:(id)arg1 canvasSize:(struct CGSize)arg2 traitCollection:(id)arg3;
- (void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(struct CGPoint)arg3 size:(struct CGSize)arg4;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)updateViewControllerVisibility;
- (void)endImpressions;
- (void)performDisappearanceTransitionForVisibleViewControllers;

@end
