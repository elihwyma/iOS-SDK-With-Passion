/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <Swift>

{
    _Bool _appleIDAuth;
    _Bool _createAppleID;
    NSString *_user;
    NSString *_site;
}

@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *site;
@property (nonatomic) _Bool appleIDAuth;
@property (nonatomic) _Bool createAppleID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 site:(id)arg2;

@end
