/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface UISwipeActionsConfiguration : NSObject

{
    _Bool _performsFirstActionWithFullSwipe;
    _Bool _autosizesButtons;
    NSArray *_actions;
}

@property (nonatomic, getter=_autosizesButtons, setter=_setAutosizesButtons:) _Bool autosizesButtons;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (nonatomic) _Bool performsFirstActionWithFullSwipe;

+ (id)configurationWithActions:(id)arg1;

- (id)init;
- (id)description;

@end
