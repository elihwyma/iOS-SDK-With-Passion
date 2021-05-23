/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class NSArray, NSString;

@protocol CPAlertDelegate;

@interface CPActionSheetTemplate : CPTemplate

{
    NSString *_title;
    NSString *_message;
    NSArray *_actions;
    id <CPAlertDelegate> _alertDelegate;
}

@property (retain, nonatomic) id <CPAlertDelegate> alertDelegate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)setTrailingNavigationBarButtons:(id)arg1;

@end
