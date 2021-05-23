/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)

@property (nonatomic, readonly) _Bool ic_isToday;
@property (nonatomic, readonly) _Bool ic_isYesterday;
@property (nonatomic, readonly) NSString *ic_shortFormattedDate;
@property (nonatomic, readonly) NSString *ic_briefFormattedDate;
@property (nonatomic, readonly) NSString *ic_briefFormattedDateForAccessibility;
@property (nonatomic, readonly) NSString *ic_localDateWithSeconds;

+ (id)ic_modificationDateForNoteBeingEdited;

- (id)ic_briefFormattedDate:(_Bool)arg1;
- (_Bool)ic_isEarlierThanDate:(id)arg1;
- (_Bool)ic_isLaterThanDate:(id)arg1;

@end
