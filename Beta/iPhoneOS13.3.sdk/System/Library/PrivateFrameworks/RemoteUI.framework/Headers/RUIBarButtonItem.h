/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIBarButtonItem;

@interface RUIBarButtonItem

{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _action;
}

@property (copy, nonatomic) CDUnknownBlockType action;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;

- (void)setEnabled:(_Bool)arg1;
- (void)_buttonPressed:(id)arg1;

@end
