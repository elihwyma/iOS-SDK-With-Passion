/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *error;
@property (copy, nonatomic) NSURL *weatherLocationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;

- (id)groupIdentifier;
- (id)initWithError:(id)arg1;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (id)initWithWeatherLocationId:(id)arg1;

@end
