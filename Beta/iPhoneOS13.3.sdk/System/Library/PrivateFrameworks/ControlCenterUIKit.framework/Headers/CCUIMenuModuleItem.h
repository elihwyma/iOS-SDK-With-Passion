/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CCUIMenuModuleItem : NSObject

{
    _Bool _busy;
    _Bool _selected;
    _Bool _placeholder;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isBusy) _Bool busy;
@property (nonatomic, getter=isSelected) _Bool selected;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)performAction;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
