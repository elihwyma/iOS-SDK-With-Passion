/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject

{
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    _Bool _useCapture;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property _Bool shouldUseCapture;

- (id)init;

@end
