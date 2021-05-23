/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionRepresentationView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView

{
    UIView *_actionContentView;
}

- (id)description;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithAction:(id)arg1;
- (void)updateContentsInsertedIntoHierarchy;
- (id)_fittingContentSizingView;
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;
- (id)_actionContentView;
- (void)_removeLoadedContentsFromViewHierarcy;
- (void)_insertLoadedContentsIntoHierarchy;

@end
