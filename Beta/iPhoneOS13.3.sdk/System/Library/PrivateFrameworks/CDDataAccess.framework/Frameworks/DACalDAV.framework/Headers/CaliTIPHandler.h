/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@interface CaliTIPHandler : NSObject

+ (void)initialize;
+ (void)processMessage:(id)arg1 inCalendar:(id)arg2;
+ (_Bool)logiTIPDetail;
+ (void)setLogiTIPDetail:(_Bool)arg1;
+ (void)processMessages:(id)arg1 inCalendar:(id)arg2;
+ (_Bool)diffsAreImportant:(id)arg1;
+ (id)debugStringForEvent:(id)arg1;
+ (_Bool)isAddressMe:(id)arg1 forAccount:(id)arg2;
+ (_Bool)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2;
+ (id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2;
+ (id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3;
+ (_Bool)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)myAddressInAccount:(id)arg1 forEvent:(id)arg2;

@end
