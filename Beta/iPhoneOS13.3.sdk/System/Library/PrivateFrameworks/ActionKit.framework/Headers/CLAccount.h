/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class CLSocket, NSDate, NSString, NSURL;

@interface CLAccount : NSObject <Swift>

{
    NSURL *_domain;
    NSURL *_domainHomePage;
    _Bool _alphaUser;
    _Bool _uploadsArePrivate;
    NSString *_email;
    NSDate *_subscriptionExpiresAt;
    long long _type;
    CLSocket *_socket;
}

@property (retain, nonatomic) NSURL *domain;
@property (retain, nonatomic) NSURL *domainHomePage;
@property (nonatomic, getter=isAlphaUser) _Bool alphaUser;
@property (nonatomic) _Bool uploadsArePrivate;
@property (copy, nonatomic) NSString *email;
@property (retain, nonatomic) NSDate *subscriptionExpiresAt;
@property (nonatomic) long long type;
@property (retain, nonatomic) CLSocket *socket;

+ (id)accountWithEmail:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1;

@end
