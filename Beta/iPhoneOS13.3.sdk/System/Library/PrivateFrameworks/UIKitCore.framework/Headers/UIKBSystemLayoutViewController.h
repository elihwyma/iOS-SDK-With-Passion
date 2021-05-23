/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBSystemLayoutViewController : UIViewController

{
    NSMutableArray *_constraints;
    unsigned long long _horizontalLayoutType;
    unsigned long long _verticalLayoutType;
    struct CGSize _centeredOffsets;
    struct UIEdgeInsets _minimumInsets;
}

@property (nonatomic) unsigned long long horizontalLayoutType;
@property (nonatomic) unsigned long long verticalLayoutType;
@property (nonatomic) struct UIEdgeInsets minimumInsets;
@property (nonatomic) struct CGSize centeredOffsets;

+ (id)systemLayoutViewControllerWithViewController:(id)arg1;

- (void)dealloc;
- (void)updateViewConstraints;

@end
