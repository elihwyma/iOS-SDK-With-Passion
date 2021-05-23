/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSVPushNotificationParameters : NSObject

{
    NSNumber *_accountIdentifier;
    NSString *_environmentName;
    NSMutableDictionary *_parameterDictionary;
    long long _requestType;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *environmentName;
@property (copy, nonatomic) NSArray *mediaKinds;
@property (copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic) NSDictionary *putParameters;
@property (nonatomic) long long requestType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)valueForParameter:(id)arg1;
- (id)_copyParametersDictionary;

@end
