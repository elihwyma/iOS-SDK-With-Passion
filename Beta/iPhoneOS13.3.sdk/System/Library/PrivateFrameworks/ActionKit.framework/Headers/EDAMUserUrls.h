/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSString;

@interface EDAMUserUrls : FATObject

{
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_userStoreUrl;
    NSString *_utilityUrl;
    NSString *_messageStoreUrl;
    NSString *_userWebSocketUrl;
    NSString *_communicationEngineUrl;
}

@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSString *userStoreUrl;
@property (retain, nonatomic) NSString *utilityUrl;
@property (retain, nonatomic) NSString *messageStoreUrl;
@property (retain, nonatomic) NSString *userWebSocketUrl;
@property (retain, nonatomic) NSString *communicationEngineUrl;

+ (id)structName;
+ (id)structFields;

@end
