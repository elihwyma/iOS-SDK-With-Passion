/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;

@interface FIUIDiscreteSizingLabel : UILabel

{
    id <FIUIDiscreteSizingLabelDelegate> _delegate;
}

@property (weak, nonatomic) id <FIUIDiscreteSizingLabelDelegate> delegate;

- (void)setText:(id)arg1;

@end
