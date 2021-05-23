/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFTriggerMorphunAssetsManagement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)triggerMorphunAssetsManagement;
+ (id)triggerMorphunAssetsManagementWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
