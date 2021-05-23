/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL;

@interface SAScreenActionInfo : SADomainObject

@property (copy, nonatomic) NSString *elementId;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *semanticData;
@property (copy, nonatomic) NSURL *semanticId;
@property (copy, nonatomic) NSURL *type;
@property (copy, nonatomic) NSString *value;

+ (id)info;
+ (id)infoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
