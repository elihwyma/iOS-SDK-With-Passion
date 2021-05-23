/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAWeatherUnits : AceObject <Swift>

@property (copy, nonatomic) NSString *distanceUnits;
@property (copy, nonatomic) NSString *precipitationUnits;
@property (copy, nonatomic) NSString *pressureUnits;
@property (copy, nonatomic) NSString *speedUnits;
@property (copy, nonatomic) NSString *temperatureUnits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)units;
+ (id)unitsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
