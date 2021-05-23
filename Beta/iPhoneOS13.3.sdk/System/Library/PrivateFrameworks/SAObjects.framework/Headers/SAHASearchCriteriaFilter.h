/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAHAFilter.h>

@class NSString, NSURL;

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (copy, nonatomic) NSURL *accessoryIdentifier;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSURL *roomIdentifier;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSURL *sceneIdentifier;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSURL *serviceGroupIdentifier;
@property (copy, nonatomic) NSURL *serviceIdentifier;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *serviceSubType;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSURL *zoneIdentifier;
@property (copy, nonatomic) NSString *zoneName;

+ (id)searchCriteriaFilter;
+ (id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
