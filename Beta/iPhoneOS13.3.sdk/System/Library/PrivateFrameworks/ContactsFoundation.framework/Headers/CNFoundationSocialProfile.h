/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject

{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayName;
}

@property (copy, readonly) NSString *urlString;
@property (copy, readonly) NSString *username;
@property (copy, readonly) NSString *userIdentifier;
@property (copy, readonly) NSString *service;
@property (copy, readonly) NSString *displayName;

+ (id)emptySocialProfile;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;

@end
