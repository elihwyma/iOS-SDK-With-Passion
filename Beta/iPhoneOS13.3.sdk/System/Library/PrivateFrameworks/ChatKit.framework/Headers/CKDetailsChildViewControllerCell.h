/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKDetailsChildViewControllerCell : CKDetailsCell

{
    _Bool _shouldUseLayoutMargins;
    UIView *_childViewControllerView;
}

@property (retain, nonatomic) UIView *childViewControllerView;
@property (nonatomic) _Bool shouldUseLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
