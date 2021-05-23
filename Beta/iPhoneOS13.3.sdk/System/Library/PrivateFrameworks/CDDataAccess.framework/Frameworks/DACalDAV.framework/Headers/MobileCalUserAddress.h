/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject

{
    MobileCalDAVAccount *_account;
    NSURL *_address;
}

@property (copy, nonatomic) NSURL *address;
@property (weak, nonatomic) MobileCalDAVAccount *account;

+ (id)userAddress:(id)arg1 forAccount:(id)arg2;
+ (id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2;

- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithAddress:(id)arg1 account:(id)arg2;

@end
