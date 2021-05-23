/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement;

@interface IKHeaderElement : IKViewElement

@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *subtitle;
@property (retain, nonatomic, readonly) IKTextElement *descriptionText;
@property (retain, nonatomic, readonly) IKImageElement *image;
@property (nonatomic, readonly) long long separator;

@end
