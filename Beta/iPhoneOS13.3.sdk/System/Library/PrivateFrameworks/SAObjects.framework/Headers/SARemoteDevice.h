/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SARemoteDevice : AceObject <Swift>

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *personalDomainsAuthenticationMode;
@property (copy, nonatomic) NSNumber *personalDomainsEnabled;
@property (nonatomic) _Bool siriEnabled;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)remoteDevice;
+ (id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
