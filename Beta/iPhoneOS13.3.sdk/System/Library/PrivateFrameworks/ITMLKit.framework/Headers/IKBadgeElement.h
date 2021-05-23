/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKImageElement.h>

@class NSString;

@interface IKBadgeElement : IKImageElement

@property (retain, nonatomic, readonly) NSString *textContent;

+ (_Bool)shouldParseChildDOMElements;

@end
