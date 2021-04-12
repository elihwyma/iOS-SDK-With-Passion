//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject
{
    FBKVOController *_controller;
    NSString *_keyPath;
    NSUInteger _options;
    SEL _action;
    void _context;
    id /* CDUnknownBlockType */ _block;
    unsigned char _state;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(NSUInteger)arg3 context:(void )arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(NSUInteger)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(NSUInteger)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(NSUInteger)arg3 block:(id /* CDUnknownBlockType */)arg4 action:(SEL)arg5 context:(void )arg6;

@end

