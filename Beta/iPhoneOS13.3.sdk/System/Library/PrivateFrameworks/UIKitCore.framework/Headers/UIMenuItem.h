/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIMenuItem : NSObject

{
    _Bool _dontDismiss;
    NSString *_title;
    SEL _action;
}

@property (nonatomic) _Bool dontDismiss;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) SEL action;

- (id)init;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;

@end
