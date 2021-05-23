/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSArray;

@interface SiriUILabelComponentView : UIView

{
    NSArray *_labels;
}

@property (retain, nonatomic) NSArray *labels;

+ (id)viewForComponent:(id)arg1;
+ (id)labelForComponentModel:(id)arg1;

@end
