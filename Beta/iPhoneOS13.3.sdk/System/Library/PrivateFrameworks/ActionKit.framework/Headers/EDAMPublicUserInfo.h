/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublicUserInfo : FATObject

{
    NSNumber *_userId;
    NSString *_shardId;
    NSNumber *_privilege;
    NSNumber *_serviceLevel;
    NSString *_username;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
}

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceLevel;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;

+ (id)structName;
+ (id)structFields;

@end
