/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TIKeyboardTouchEvent;

@interface TIKBSessionTouchInfo : NSObject

{
    TIKeyboardTouchEvent *_touch;
    unsigned long long _layoutId;
}

@property (retain, nonatomic) TIKeyboardTouchEvent *touch;
@property (nonatomic) unsigned long long layoutId;

@end
