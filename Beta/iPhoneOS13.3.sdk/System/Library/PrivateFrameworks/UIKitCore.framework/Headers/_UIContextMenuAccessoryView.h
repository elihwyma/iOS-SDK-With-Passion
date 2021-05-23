/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView

{
    int _trackingAxis;
    unsigned long long _location;
    CDStruct_6f807b77 _anchor;
    struct CGPoint _offset;
}

@property (nonatomic) unsigned long long location;
@property (nonatomic) CDStruct_6f807b77 anchor;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) int trackingAxis;

- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(CDStruct_c50e6da7)arg2;
- (struct CGPoint)attachmentOffsetWithReferenceFrame:(struct CGRect)arg1;

@end
