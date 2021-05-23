/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMServiceAccessEntry : FATObject

{
    NSNumber *_accessTime;
    NSString *_serviceName;
    NSNumber *_userId;
    NSNumber *_authenticatedClientUserId;
    NSNumber *_apiKeyId;
    NSNumber *_businessAdmin;
}

@property (retain, nonatomic) NSNumber *accessTime;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *authenticatedClientUserId;
@property (retain, nonatomic) NSNumber *apiKeyId;
@property (retain, nonatomic) NSNumber *businessAdmin;

+ (id)structName;
+ (id)structFields;

@end
