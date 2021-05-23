/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWeatherAbstractObject.h>

@class NSString;

@interface SAWeatherObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
