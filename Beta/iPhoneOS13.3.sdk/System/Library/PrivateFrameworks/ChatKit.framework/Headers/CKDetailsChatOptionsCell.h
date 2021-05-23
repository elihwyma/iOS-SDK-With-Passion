/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsChatOptionsCell : CKDetailsCell

{
    UISwitch *_controlSwitch;
}

@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;
+ (double)estimatedHeight;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
