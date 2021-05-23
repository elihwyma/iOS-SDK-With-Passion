/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@protocol CADACAccountsProvider;

__attribute__((visibility("hidden")))
@interface CADWhitelistedAccountAccessHandler : NSObject

{
    id <CADACAccountsProvider> _accountsProvider;
}

@property (nonatomic, readonly) id <CADACAccountsProvider> accountsProvider;

- (void)reset;
- (id)initWithAccountsProvider:(id)arg1;
- (_Bool)isAccountManaged:(id)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;

@end
