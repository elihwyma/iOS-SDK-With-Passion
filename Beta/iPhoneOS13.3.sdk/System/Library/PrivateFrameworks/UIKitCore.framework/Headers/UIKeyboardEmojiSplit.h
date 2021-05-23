/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardEmojiKeyView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplit : UIKeyboardEmojiKeyView <Swift>

{
    UITableView *_picker;
}

@property (readonly) UITableView *picker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldCache;
- (id)defaultIndexPath;

@end
