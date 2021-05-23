/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTangierController;

@protocol SXActionManager;

@interface SXTextContextMenuProvider : NSObject

{
    SXTangierController *_tangierController;
    id <SXActionManager> _actionManager;
}

@property (nonatomic, readonly) SXTangierController *tangierController;
@property (nonatomic, readonly) id <SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)commitPreviewViewController:(id)arg1;
- (id)contextMenuAtLocation:(struct CGPoint)arg1 viewport:(id)arg2;
- (id)initWithTangierController:(id)arg1 actionManager:(id)arg2;

@end
