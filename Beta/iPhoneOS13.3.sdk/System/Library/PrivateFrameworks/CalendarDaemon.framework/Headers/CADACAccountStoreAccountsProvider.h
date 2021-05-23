/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface CADACAccountStoreAccountsProvider : NSObject

{
    ACAccountStore *_accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;

- (id)accountWithIdentifier:(id)arg1;
- (id)accounts;
- (id)initWithAccountStore:(id)arg1;

@end
