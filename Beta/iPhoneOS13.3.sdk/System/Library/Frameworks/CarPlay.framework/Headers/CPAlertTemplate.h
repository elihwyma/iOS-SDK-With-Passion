/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class NSArray, NSString;

@protocol CPAlertDelegate;

@interface CPAlertTemplate : CPTemplate

{
    NSArray *_titleVariants;
    NSArray *_actions;
}

@property (weak, nonatomic) id <CPAlertDelegate> templateDelegate;
@property (copy, nonatomic, readonly) NSArray *titleVariants;
@property (nonatomic, readonly) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addAction:(id)arg1;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 actions:(id)arg2;

@end
