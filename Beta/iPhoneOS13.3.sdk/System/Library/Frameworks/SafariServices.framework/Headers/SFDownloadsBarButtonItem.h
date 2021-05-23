/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIBarButtonItem.h>

@class SFDownloadsBarButtonItemView;

__attribute__((visibility("hidden")))
@interface SFDownloadsBarButtonItem : UIBarButtonItem

{
    SFDownloadsBarButtonItemView *_buttonView;
    double _progress;
}

@property (nonatomic) double progress;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pulse;

@end
