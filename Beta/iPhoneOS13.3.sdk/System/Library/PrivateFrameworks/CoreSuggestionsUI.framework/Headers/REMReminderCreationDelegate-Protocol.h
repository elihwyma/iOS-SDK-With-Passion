/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/Swift-Protocol.h>

@class CLLocation, MISSING_TYPE, NSAttributedString, NSDateComponents, NSString, NSURL, NSUserActivity;

@protocol REMReminderCreationDelegate <Swift>

@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) _Bool wantsExtendedDetailOnlyView;
@property (nonatomic, readonly) _Bool titleIsGeneratedSuggestion;
@property (nonatomic, readonly) long long locationProximity;

- (MISSING_TYPE *)reminderCreationViewController:didCreateReminder:error: /* Error: Ran out of types for this method. */;

@end
