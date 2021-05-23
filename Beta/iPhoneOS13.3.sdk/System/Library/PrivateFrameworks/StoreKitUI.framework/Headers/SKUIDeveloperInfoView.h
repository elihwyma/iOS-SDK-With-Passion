/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, SKUIClientContext, SKUIDeveloperInfo, SKUIProductInformationView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoView : UIView

{
    SKUIClientContext *_clientContext;
    SKUIDeveloperInfo *_developerInfo;
    UIView *_infoSeparatorView;
    SKUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUIDeveloperInfo *developerInfo;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2;

@end
