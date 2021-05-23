/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UIView

{
    unsigned long long _loadingState;
    UIView *_loadingStatusView;
    UILabel *_noneFoundLabel;
    UIActivityIndicatorView *_loadingIndicator;
    id <PXPerson> _person;
}

@property (nonatomic, readonly) UIView *loadingStatusView;
@property (nonatomic, readonly) UILabel *noneFoundLabel;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) id <PXPerson> person;
@property (nonatomic) unsigned long long loadingState;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2 localizedName:(id)arg3;

@end
