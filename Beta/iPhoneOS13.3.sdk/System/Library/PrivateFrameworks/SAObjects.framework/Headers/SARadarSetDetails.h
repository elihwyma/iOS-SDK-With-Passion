/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *classification;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *title;

+ (id)setDetails;
+ (id)setDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
