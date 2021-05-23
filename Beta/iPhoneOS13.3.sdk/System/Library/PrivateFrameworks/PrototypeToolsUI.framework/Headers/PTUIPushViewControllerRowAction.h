/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPushViewControllerRowAction : PTRowAction

{
    CDUnknownBlockType _viewControllerCreator;
}

@property (nonatomic, readonly) CDUnknownBlockType viewControllerCreator;

+ (id)actionWithViewControllerCreator:(CDUnknownBlockType)arg1;

- (CDUnknownBlockType)defaultHandler;
- (_Bool)deselectsRowOnSuccess;

@end
