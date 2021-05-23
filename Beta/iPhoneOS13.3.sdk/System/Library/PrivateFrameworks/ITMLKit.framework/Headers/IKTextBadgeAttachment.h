/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <UIKit/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment

{
    IKBadgeElement *_badge;
    IKColor *_tintColor;
}

@property (weak, nonatomic, readonly) IKBadgeElement *badge;
@property (retain, nonatomic) IKColor *tintColor;

- (id)initWithBadgeElement:(id)arg1;

@end
