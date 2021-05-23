/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface CACentralTableViewCell : UITableViewCell

{
    UILabel *_deviceNameLabel;
    UILabel *_connectionStatusLabel;
    UILabel *_inputLabel;
    UILabel *_slashLabel;
    UILabel *_outputLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_labelConstraints;
    NSArray *_activityHConstraints;
    NSArray *_activityVConstraints;
}

@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) UILabel *connectionStatusLabel;
@property (retain, nonatomic) UILabel *inputLabel;
@property (retain, nonatomic) UILabel *slashLabel;
@property (retain, nonatomic) UILabel *outputLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (retain, nonatomic) NSArray *activityHConstraints;
@property (retain, nonatomic) NSArray *activityVConstraints;

- (void)dealloc;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)createInitialConstraints;
- (void)startIndicator;
- (void)stopIndicator;

@end
