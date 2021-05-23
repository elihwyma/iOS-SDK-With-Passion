/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface FCNotificationDropboxData : NSObject <Swift>

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *baseURLString;
@property (copy, nonatomic, readonly) NSString *notificationUserID;
@property (copy, nonatomic, readonly) NSString *deviceToken;
@property (copy, nonatomic, readonly) NSString *storefrontID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
