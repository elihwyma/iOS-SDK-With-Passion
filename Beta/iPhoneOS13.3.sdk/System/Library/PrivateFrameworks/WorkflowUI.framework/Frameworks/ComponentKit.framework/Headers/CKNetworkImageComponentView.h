/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView

{
    _Bool _inReusePool;
    id _download;
    CKNetworkImageSpecifier *_specifier;
}

@property (retain, nonatomic) CKNetworkImageSpecifier *specifier;

- (void)dealloc;
- (void)layoutSubviews;
- (void)didEnterReusePool;
- (void)willLeaveReusePool;
- (void)didDownloadImage:(struct CGImage *)arg1 error:(id)arg2;
- (void)_startDownloadIfNotInReusePool;
- (void)updateContentsRect;

@end
