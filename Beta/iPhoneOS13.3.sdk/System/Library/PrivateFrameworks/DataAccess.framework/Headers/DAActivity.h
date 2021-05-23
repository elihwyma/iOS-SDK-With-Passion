/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class DAAccount;

@interface DAActivity : NSObject

{
    DAAccount *_account;
}

- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end
