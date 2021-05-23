/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMovieV2MovieContextObject : SADomainObject

@property (copy, nonatomic) NSString *movieName;

+ (id)movieContextObject;
+ (id)movieContextObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
