/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray;

@interface IKDialogTemplate : IKViewElement

@property (nonatomic, readonly) unsigned long long type;
@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *descriptionText;
@property (retain, nonatomic, readonly) NSArray *buttons;

@end
