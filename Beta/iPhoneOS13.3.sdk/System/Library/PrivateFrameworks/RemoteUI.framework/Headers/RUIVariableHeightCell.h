/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIVariableHeightCell

{
    _Bool _supportsAccessory;
}

@property (nonatomic) _Bool supportsAccessory;

- (double)height;
- (void)layoutSubviews;
- (struct CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2;

@end
