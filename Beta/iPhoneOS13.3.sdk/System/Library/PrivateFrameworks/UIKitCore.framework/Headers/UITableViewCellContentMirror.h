/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView

{
    unsigned int _selected:1;
}

@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)cell;

@end
