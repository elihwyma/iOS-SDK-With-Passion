/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject

{
    NSMutableArray *_accessHandlers;
}

@property (nonatomic, readonly) NSMutableArray *accessHandlers;

- (id)init;
- (void)reset;
- (_Bool)isAccountManaged:(id)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)addAccountAccessHandler:(id)arg1;

@end
