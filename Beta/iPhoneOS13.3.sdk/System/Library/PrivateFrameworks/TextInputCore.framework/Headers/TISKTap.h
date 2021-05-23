/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TIKeyboardLayout, TIKeyboardTouchEvent;

@interface TISKTap : NSObject

{
    _Bool _downup;
    TIKeyboardTouchEvent *_firstTouch;
    TIKeyboardTouchEvent *_lastTouch;
    NSMutableArray *_dragTouches;
    unsigned long long _numberOfDrags;
    long long _pathIndex;
    TIKeyboardLayout *_layout;
}

@property (retain, nonatomic) NSMutableArray *dragTouches;
@property (retain, nonatomic) TIKeyboardTouchEvent *firstTouch;
@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouch;
@property (nonatomic) unsigned long long numberOfDrags;
@property (nonatomic) long long pathIndex;
@property (retain, nonatomic) TIKeyboardLayout *layout;
@property (nonatomic, getter=isDownUpTap) _Bool downup;

- (long long)_forcedKeyCode;
- (id)init:(id)arg1 layout:(id)arg2;
- (void)addDragTouch:(id)arg1;
- (double)downErrorDistance:(struct CGRect)arg1;
- (double)upErrorDistance:(struct CGRect)arg1;
- (struct CGRect)getFrameForKey:(id)arg1;
- (id)stringForIntendedKey;
- (double)distance:(id)arg1 withTouch:(id)arg2;
- (double)totalTapDistance;

@end
