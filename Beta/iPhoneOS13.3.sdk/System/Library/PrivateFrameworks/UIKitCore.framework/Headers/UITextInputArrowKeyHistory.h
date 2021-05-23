/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextPosition;

__attribute__((visibility("hidden")))
@interface UITextInputArrowKeyHistory : NSObject

{
    UITextPosition *startPosition;
    long long amount;
    int anchor;
    UITextPosition *start;
    UITextPosition *end;
    UITextPosition *cursor;
    _Bool affinityDownstream;
}

@property (retain, nonatomic) UITextPosition *startPosition;
@property (nonatomic) int anchor;
@property (retain, nonatomic) UITextPosition *start;
@property (retain, nonatomic) UITextPosition *end;
@property (retain, nonatomic) UITextPosition *cursor;
@property (nonatomic) _Bool affinityDownstream;
@property (nonatomic) long long amount;

- (void)dealloc;

@end
