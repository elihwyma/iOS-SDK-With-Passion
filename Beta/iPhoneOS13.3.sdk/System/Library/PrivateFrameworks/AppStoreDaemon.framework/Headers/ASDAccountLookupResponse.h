/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSError, NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse

{
    _Bool _askToBuyEnabled;
    NSNumber *_accountID;
}

@property (copy) NSNumber *accountID;
@property _Bool askToBuyEnabled;
@property (copy) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1;

@end
