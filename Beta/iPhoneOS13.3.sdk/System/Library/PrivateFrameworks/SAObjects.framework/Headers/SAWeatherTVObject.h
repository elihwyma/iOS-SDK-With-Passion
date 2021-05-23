/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWeatherAbstractObject.h>

@class NSString;

@interface SAWeatherTVObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)tVObject;
+ (id)tVObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
