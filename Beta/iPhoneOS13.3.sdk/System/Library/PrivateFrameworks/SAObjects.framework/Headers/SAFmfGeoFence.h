/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (retain, nonatomic) SALocation *location;

+ (id)geoFence;
+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
