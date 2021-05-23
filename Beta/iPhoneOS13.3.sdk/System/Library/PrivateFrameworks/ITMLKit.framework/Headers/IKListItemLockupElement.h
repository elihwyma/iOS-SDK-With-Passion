/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKActivityIndicatorElement, IKCheckMarkElement, IKOrdinalElement, IKProgressIndicatorElement, IKTextElement, NSArray, NSString;

@interface IKListItemLockupElement : IKViewElement

@property (nonatomic, readonly) NSString *itemHeight;
@property (retain, nonatomic, readonly) NSArray *images;
@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *subtitle;
@property (retain, nonatomic, readonly) NSArray *decorationImages;
@property (retain, nonatomic, readonly) IKTextElement *decorationLabel;
@property (retain, nonatomic, readonly) IKProgressIndicatorElement *progressIndicator;
@property (retain, nonatomic, readonly) IKActivityIndicatorElement *activityIndicator;
@property (retain, nonatomic, readonly) IKCheckMarkElement *checkMark;
@property (retain, nonatomic, readonly) IKOrdinalElement *ordinal;
@property (retain, nonatomic, readonly) IKViewElement *relatedContent;

@end
