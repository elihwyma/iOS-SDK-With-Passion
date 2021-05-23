/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSDate.h>

@interface NSDate (NotesDateUtilities)

+ (id)_notes_todayDateFormatter;
+ (id)_notes_relativeDateFormatter;
+ (id)_notes_fallbackDateFormatter;

- (id)day;
- (id)userFriendlyStringWithTime;
- (id)userFriendlyString;

@end
