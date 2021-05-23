/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSTextContainer;

@protocol NSUITextViewCommonMethods <Swift>

@property (weak, nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct _NSRange markedRange;
@property (nonatomic, readonly) NSDictionary *markedTextStyle;

- (unsigned short)visibleRect;
- (unsigned short)textContainerOrigin;
- (unsigned short)invalidateTextContainerOrigin;
- (unsigned short)setConstrainedFrameSize: /* Error: Ran out of types for this method. */;
- (unsigned short)setNeedsDisplayInRect:avoidAdditionalLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)textContainerInset;
- (unsigned short)minSize;
- (unsigned short)isHorizontallyResizable;

@end
