/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBrowserCell.h>

@class CKAppInstallation, CKBrowserIconView;

__attribute__((visibility("hidden")))
@interface CKBrowserAppInstallCell : CKBrowserCell

{
    CKAppInstallation *_installation;
    CKBrowserIconView *_browserIconView;
}

@property (retain, nonatomic) CKBrowserIconView *browserIconView;
@property (retain, nonatomic) CKAppInstallation *installation;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)iconView;

@end
