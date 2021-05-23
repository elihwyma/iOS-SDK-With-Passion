/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UISearchField.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField

{
    long long _deferredClearButtonMode;
    id _deferredFont;
    struct CGRect _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    _Bool _isDeferringInterfaceUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;

- (void)dealloc;
- (struct CGRect)frame;
- (id)text;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setClearButtonMode:(long long)arg1;
- (float)paddingLeft;
- (float)paddingTop;
- (long long)clearButtonMode;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;

@end
