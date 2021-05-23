/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject

{
    UITableViewCell *_cell;
    long long _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
}

@property (nonatomic, readonly, getter=isDataRequired) _Bool dataRequired;
@property (nonatomic, readonly) _Bool wantsMaskingWhileAnimatingDisabled;

- (void)dealloc;
- (id)editControl:(_Bool)arg1;
- (id)reorderControl:(_Bool)arg1;
- (id)reorderSeparatorView:(_Bool)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;

@end
