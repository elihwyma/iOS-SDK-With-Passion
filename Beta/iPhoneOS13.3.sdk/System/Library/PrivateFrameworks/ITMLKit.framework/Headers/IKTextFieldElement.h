/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKTextElement.h>

@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement

{
    IKAppKeyboard *_keyboard;
}

@property (nonatomic, readonly) IKAppKeyboard *keyboard;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
