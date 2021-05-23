/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UILabel;

@interface CKDetailsSIMCell : CKDetailsCell

{
    UILabel *_simTitleLabel;
}

@property (retain, nonatomic) UILabel *simTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initConstraints;

@end
