/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject

{
    _Bool _hasAutomaticMinimumSize;
    _Bool _hasAutomaticMaximumSize;
    UIWindowScene *_scene;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
}

@property (nonatomic) struct CGSize minimumSize;
@property (nonatomic) struct CGSize maximumSize;

- (id)_initWithScene:(id)arg1;

@end
