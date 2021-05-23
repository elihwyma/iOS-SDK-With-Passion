/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject

{
    id _strongObject;
    id _weakObject;
    SUScriptObject *_scriptObject;
    NSLock *_internalLock;
}

@property (weak, nonatomic) id weakObject;
@property (retain, nonatomic) id strongObject;
@property (retain, nonatomic) NSLock *internalLock;
@property (retain) id object;
@property (weak) SUScriptObject *scriptObject;

+ (id)objectWithNativeObject:(id)arg1;
+ (id)objectWithNativeObject:(id)arg1 weak:(_Bool)arg2;

- (id)init;
- (void)lock;
- (void)unlock;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
