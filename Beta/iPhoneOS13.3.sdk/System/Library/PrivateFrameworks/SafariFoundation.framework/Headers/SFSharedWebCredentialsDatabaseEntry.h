/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject

{
    _Bool _approved;
    NSString *_domain;
    NSString *_appID;
    long long _service;
}

@property (copy, nonatomic, readonly) NSString *domain;
@property (copy, nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) long long service;
@property (nonatomic, readonly, getter=isApproved) _Bool approved;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(_Bool)arg4;

@end
