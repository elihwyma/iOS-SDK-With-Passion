/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <Swift>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (copy, nonatomic) NSNumber *age;
@property (nonatomic) double altitude;
@property (copy, nonatomic) NSString *desiredAccuracy;
@property (nonatomic) double direction;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)setRequestOrigin;
+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
