/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic, readonly) NSString *startDate;
@property (nonatomic, readonly) NSString *endDate;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) SXFormattedText *notes;

- (id)notesWithValue:(id)arg1 withType:(int)arg2;

@end
