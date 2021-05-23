/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *objects;
@property (copy, nonatomic) NSArray *resultObjects;

+ (id)addResultObjects;
+ (id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
