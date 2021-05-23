/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKDetailsLocationShareHeaderFooterView : UITableViewHeaderFooterView

{
    UITextView *_locationSharingTextView;
}

@property (retain, nonatomic) UITextView *locationSharingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;

@end
