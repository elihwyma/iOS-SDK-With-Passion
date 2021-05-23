/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAlertItem;

@protocol SBAlertItemPresenter;

@interface SBAlertItemPresentation : NSObject

{
    SBAlertItem *_alertItem;
    id <SBAlertItemPresenter> _presenter;
}

@property (retain, nonatomic) SBAlertItem *alertItem;
@property (retain, nonatomic) id <SBAlertItemPresenter> presenter;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAlertItem:(id)arg1 presenter:(id)arg2;

@end
