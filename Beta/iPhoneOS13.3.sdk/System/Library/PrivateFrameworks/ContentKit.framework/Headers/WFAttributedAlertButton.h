/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFSelectableAlertButton.h>

@class NSAttributedString, NSString;

@interface WFAttributedAlertButton : WFSelectableAlertButton

{
    NSAttributedString *_attributedTitle;
    NSString *_label;
}

@property (copy, nonatomic, readonly) NSAttributedString *attributedTitle;
@property (copy, nonatomic, readonly) NSString *label;

+ (id)buttonWithAttributedTitle:(id)arg1 label:(id)arg2 selected:(_Bool)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5;

@end
