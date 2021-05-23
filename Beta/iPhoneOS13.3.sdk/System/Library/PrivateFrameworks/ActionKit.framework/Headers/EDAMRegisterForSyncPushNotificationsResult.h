/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSData;

@interface EDAMRegisterForSyncPushNotificationsResult : FATObject

{
    NSData *_sharedSecret;
}

@property (retain, nonatomic) NSData *sharedSecret;

+ (id)structName;
+ (id)structFields;

@end
