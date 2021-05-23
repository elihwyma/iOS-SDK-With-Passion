/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class CKBusinessInfoView, NSString;

__attribute__((visibility("hidden")))
@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView

{
    CKBusinessInfoView *_businessInfoView;
}

@property (retain, nonatomic) CKBusinessInfoView *businessInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;

@end
