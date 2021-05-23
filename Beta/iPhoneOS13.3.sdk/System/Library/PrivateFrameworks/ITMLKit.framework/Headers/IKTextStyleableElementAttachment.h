/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKTextElement;

@interface IKTextStyleableElementAttachment : NSObject

{
    IKTextElement *_textElement;
}

@property (weak, nonatomic, readonly) IKTextElement *textElement;

- (id)initWithTextElement:(id)arg1;

@end
