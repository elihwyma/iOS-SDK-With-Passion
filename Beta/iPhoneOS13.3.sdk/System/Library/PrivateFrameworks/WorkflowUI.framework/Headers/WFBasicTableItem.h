/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTableItem.h>

@class NSString, UIImage;

@interface WFBasicTableItem : WFTableItem

{
    NSString *_primaryText;
    NSString *_secondaryText;
    UIImage *_image;
    unsigned long long _primaryTextStyle;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long primaryTextStyle;

- (_Bool)isEqual:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4;

@end
