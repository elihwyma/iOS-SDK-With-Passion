/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIButton.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton

{
    _Bool _deferredEnabled;
    struct CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    _Bool _isDeferringInterfaceUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleForState:(unsigned long long)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveImagesAsDeferred;
- (void)_saveTitlesAsDeferred;

@end
