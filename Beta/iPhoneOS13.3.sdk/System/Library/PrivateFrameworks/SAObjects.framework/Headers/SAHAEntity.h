/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAHAEntity : SADomainObject

@property (copy, nonatomic) NSString *accessory;
@property (copy, nonatomic) NSURL *accessoryIdentifier;
@property (copy, nonatomic) NSString *accessoryType;
@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSNumber *currentDevice;
@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSString *hashedRouteUID;
@property (copy, nonatomic) NSString *home;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *primaryServiceIdentifier;
@property (copy, nonatomic) NSArray *relatedEntityIdentifiers;
@property (copy, nonatomic) NSString *room;
@property (copy, nonatomic) NSURL *roomIdentifier;
@property (copy, nonatomic) NSArray *sceneActions;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *serviceGroup;
@property (copy, nonatomic) NSArray *serviceGroupIdentifiers;
@property (copy, nonatomic) NSString *serviceSubType;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSArray *status;
@property (copy, nonatomic) NSArray *targetAttributes;
@property (copy, nonatomic) NSString *zone;
@property (copy, nonatomic) NSArray *zoneIdentifiers;

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
