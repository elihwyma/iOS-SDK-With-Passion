/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAPerson;

@interface SADPDeviceDetail : SADomainObject <Swift>

@property (nonatomic) _Bool canPlaySound;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceLocality;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) _Bool foundNearby;
@property (retain, nonatomic) SAPerson *owner;
@property (copy, nonatomic) NSString *productName;
@property (nonatomic) _Bool thisDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deviceDetail;
+ (id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
