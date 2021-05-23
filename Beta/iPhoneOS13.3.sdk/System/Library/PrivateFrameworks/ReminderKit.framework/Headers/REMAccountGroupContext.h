/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMAccount;

@interface REMAccountGroupContext : NSObject

{
    REMAccount *_account;
}

@property (retain, nonatomic) REMAccount *account;

- (id)initWithAccount:(id)arg1;
- (id)fetchGroupsWithError:(id *)arg1;

@end
