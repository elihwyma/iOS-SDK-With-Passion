/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFAlertButton.h>

@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton

{
    _Bool _selected;
    _Bool _stickySelection;
    NSString *_subtitle;
    WFImage *_image;
}

@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) WFImage *image;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) _Bool stickySelection;

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(_Bool)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(_Bool)arg3 stickySelection:(_Bool)arg4 style:(long long)arg5 handler:(CDUnknownBlockType)arg6 image:(id)arg7;

@end
