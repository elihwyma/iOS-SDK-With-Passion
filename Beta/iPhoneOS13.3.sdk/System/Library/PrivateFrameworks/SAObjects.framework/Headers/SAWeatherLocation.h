/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALocation.h>

@class NSString;

@interface SAWeatherLocation : SALocation

@property (copy, nonatomic) NSString *locationId;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
