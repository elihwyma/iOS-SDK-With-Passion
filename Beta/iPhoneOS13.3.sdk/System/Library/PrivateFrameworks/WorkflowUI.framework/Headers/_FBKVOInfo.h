/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject

{
    FBKVOController *_controller;
    NSString *_keyPath;
    unsigned long long _options;
    SEL _action;
    void *_context;
    CDUnknownBlockType _block;
    unsigned char _state;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 action:(SEL)arg5 context:(void *)arg6;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;

@end
