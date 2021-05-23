/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SADPDeviceSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *deviceSearchQueries;

+ (id)deviceSearch;
+ (id)deviceSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
