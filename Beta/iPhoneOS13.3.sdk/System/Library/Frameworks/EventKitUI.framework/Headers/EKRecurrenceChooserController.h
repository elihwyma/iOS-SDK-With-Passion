/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSDate, UIColor;

@protocol EKRecurrenceChooserControllerDelegate;

@interface EKRecurrenceChooserController : NSObject

{
    id <EKRecurrenceChooserControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    NSDate *_date;
}

@property (copy) NSDate *date;
@property (weak) id <EKRecurrenceChooserControllerDelegate> delegate;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic, readonly) long long frequency;

+ (int)dayFromNumber:(long long)arg1;

- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (id)startDateComponents:(unsigned long long)arg1;
- (void)notifyDelegate;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (_Bool)drawBackgroundForRow:(long long)arg1;
- (void)rowTapped:(long long)arg1;

@end
