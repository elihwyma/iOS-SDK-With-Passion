/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement, NSString;

@interface IKButtonElement : IKViewElement

@property (nonatomic, readonly) long long buttonType;
@property (retain, nonatomic, readonly) IKTextElement *text;
@property (copy, nonatomic, readonly) NSString *confirmationText;
@property (retain, nonatomic, readonly) IKImageElement *image;

@end
