/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contingency;

+ (id)repeatIt;
+ (id)repeatItWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
