/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *weatherLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (id)initWithWeatherLocations:(id)arg1;

@end
