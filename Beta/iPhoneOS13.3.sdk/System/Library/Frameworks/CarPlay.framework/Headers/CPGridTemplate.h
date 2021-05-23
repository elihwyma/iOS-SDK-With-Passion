/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class CPBarButton, NAFuture, NSArray, NSString;

@interface CPGridTemplate : CPTemplate

{
    NSArray *_gridButtons;
    NSString *_title;
}

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (nonatomic, readonly) NSArray *gridButtons;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 gridButtons:(id)arg2;

@end
