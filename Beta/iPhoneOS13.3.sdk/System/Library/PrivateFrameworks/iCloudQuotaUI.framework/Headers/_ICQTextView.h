/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <UIKit/UITextView.h>

@class NSArray, NSDictionary, NSString;

@interface _ICQTextView : UITextView

{
    NSString *_format;
    NSArray *_links;
    NSDictionary *_attributes;
}

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *links;
@property (retain, nonatomic) NSDictionary *attributes;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setAttributedText;

@end
