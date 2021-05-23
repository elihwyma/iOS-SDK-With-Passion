/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIKBTouchState, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject

{
    NSMutableArray *_touchHistory;
    unsigned long long _processedTouchCount;
    UIKBTree *_key;
    UIKBTree *_keyplane;
    UIKBTree *_slidOffKey;
    struct CGPoint _initialPoint;
    struct CGPoint _initialDragPoint;
    _Bool _dragged;
    int _stage;
    int _fingerID;
    _Bool _maySuppressUpAction;
    int _initialKeyState;
    long long _continuousPathState;
}

@property (nonatomic, readonly) NSMutableArray *touchHistory;
@property (nonatomic, readonly) UIKBTouchState *touch;
@property (nonatomic) unsigned long long processedTouchCount;
@property (retain, nonatomic) UIKBTree *key;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (retain, nonatomic) UIKBTree *slidOffKey;
@property (nonatomic) struct CGPoint initialPoint;
@property (nonatomic) struct CGPoint initialDragPoint;
@property (nonatomic) _Bool dragged;
@property (nonatomic) int stage;
@property (nonatomic) int fingerID;
@property (nonatomic) _Bool maySuppressUpAction;
@property (nonatomic) int initialKeyState;
@property (nonatomic) long long continuousPathState;

- (id)init;
- (void)dealloc;
- (void)addTouch:(id)arg1;

@end
