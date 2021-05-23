/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class NSAttributedString, UIView;

@protocol _SFSettingsAlertOptionsGroupItemConfiguration <Swift>

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) NSAttributedString *attributedText;

@end
