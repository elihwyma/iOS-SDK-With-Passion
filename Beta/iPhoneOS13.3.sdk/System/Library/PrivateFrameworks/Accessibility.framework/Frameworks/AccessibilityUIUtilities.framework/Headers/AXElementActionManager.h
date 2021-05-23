/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class AXDragManager;

@interface AXElementActionManager : NSObject

{
    _Bool _shouldIncludeMedusaActions;
    AXDragManager *_dragManager;
}

@property (nonatomic, readonly) AXDragManager *dragManager;
@property (nonatomic, readonly) _Bool isDragActive;
@property (nonatomic) _Bool shouldIncludeMedusaActions;

- (_Bool)performAction:(id)arg1;
- (id)initWithDragManager:(id)arg1;
- (id)initWithDragServiceName:(id)arg1;
- (_Bool)canShowActionsForElement:(id)arg1;
- (id)actionsForElement:(id)arg1;

@end
