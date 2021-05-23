/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CADInternalOperationGroup : CADOperationGroup <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADInternalForceStatCollection:(CDUnknownBlockType)arg1;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;
- (_Bool)_internalAccessGranted;

@end
