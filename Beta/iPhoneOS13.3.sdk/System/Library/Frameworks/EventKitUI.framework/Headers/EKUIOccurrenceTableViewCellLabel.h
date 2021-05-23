/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UILabel.h>

@interface EKUIOccurrenceTableViewCellLabel : UILabel

{
    _Bool _vibrant;
}

@property (nonatomic) _Bool vibrant;

- (void)tintColorDidChange;

@end
