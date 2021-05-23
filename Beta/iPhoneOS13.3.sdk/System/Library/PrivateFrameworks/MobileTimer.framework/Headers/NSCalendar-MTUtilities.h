/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MTUtilities)

+ (unsigned long long)_optionsForBackwards:(_Bool)arg1;
+ (id)mtGregorianCalendar;

- (id)mtPreviousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;
- (id)mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;
- (id)mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)_mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(_Bool)arg3;
- (id)_nextDateHelperAfterDate:(id)arg1 nextDateBlock:(CDUnknownBlockType)arg2;
- (id)_mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(_Bool)arg4;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (_Bool)mtDateRequiresSingularTimeString:(id)arg1;

@end
