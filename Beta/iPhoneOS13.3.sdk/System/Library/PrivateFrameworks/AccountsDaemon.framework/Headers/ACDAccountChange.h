/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccount;

__attribute__((visibility("hidden")))
@interface ACDAccountChange : NSObject

{
    int _changeType;
    ACAccount *_account;
    ACAccount *_oldAccount;
}

@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) ACAccount *oldAccount;

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

@end
