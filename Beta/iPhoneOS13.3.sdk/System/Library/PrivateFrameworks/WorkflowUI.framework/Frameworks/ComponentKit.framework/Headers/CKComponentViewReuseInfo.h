/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIView;

@interface CKComponentViewReuseInfo : NSObject

{
    UIView *_view;
    CDUnknownBlockType _didEnterReusePoolBlock;
    CDUnknownBlockType _willLeaveReusePoolBlock;
    NSMutableArray *_childViewInfos;
    _Bool _hidden;
    _Bool _ancestorHidden;
}

- (void)didHide;
- (id)initWithView:(id)arg1 didEnterReusePoolBlock:(CDUnknownBlockType)arg2 willLeaveReusePoolBlock:(CDUnknownBlockType)arg3;
- (void)registerChildViewInfo:(id)arg1;
- (void)willUnhide;
- (void)ancestorDidHide;
- (void)ancestorWillUnhide;

@end
