/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class NSNumberFormatter, NSString, UIButton, UILabel;

@protocol CPSPageControlling;

@interface CPSPagingControlView : UIView

{
    unsigned long long _pageIndex;
    unsigned long long _pageCount;
    UIButton *_previousButton;
    UIButton *_nextButton;
    id <CPSPageControlling> _pagingDelegate;
    UILabel *_positionLabel;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long pageCount;
@property (retain, nonatomic) UIButton *previousButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (weak, nonatomic) id <CPSPageControlling> pagingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateImages;
- (id)_linearFocusItems;
- (void)_handlePreviousButton:(id)arg1;
- (void)_handleNextButton:(id)arg1;
- (void)_invokeDelegateForPageIndex:(unsigned long long)arg1;
- (void)enablePageControlsIfNecessary;

@end
