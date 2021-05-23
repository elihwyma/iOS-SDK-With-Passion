/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBScreenTraits, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneTransformationContext : NSObject

{
    _Bool _usesScriptSwitch;
    UIKBTree *_activeKeyboard;
    NSString *_currentKeyplaneName;
    UIKBScreenTraits *_screenTraits;
    double _resizingOffset;
}

@property (retain, nonatomic) UIKBTree *activeKeyboard;
@property (retain, nonatomic) NSString *currentKeyplaneName;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (nonatomic) _Bool usesScriptSwitch;
@property (nonatomic) double resizingOffset;

@end
