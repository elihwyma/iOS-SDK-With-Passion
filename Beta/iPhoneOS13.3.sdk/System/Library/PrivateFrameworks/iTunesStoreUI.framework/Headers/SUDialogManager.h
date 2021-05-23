/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject

{
    NSMutableArray *_dialogs;
}

@property (nonatomic, readonly) long long numberOfPendingDialogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (id)newDialogWithError:(id)arg1;

- (void)dealloc;
- (_Bool)presentDialog:(id)arg1;
- (_Bool)presentDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (_Bool)_isDisplayingEquivalentDialog:(id)arg1;
- (void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2;
- (_Bool)presentDialogForError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentDialogForError:(id)arg1;

@end
