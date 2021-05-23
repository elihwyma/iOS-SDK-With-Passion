/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredAccuracy;
@property (copy, nonatomic) NSNumber *maxAge;
@property (copy, nonatomic) NSNumber *searchTimeout;

+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
