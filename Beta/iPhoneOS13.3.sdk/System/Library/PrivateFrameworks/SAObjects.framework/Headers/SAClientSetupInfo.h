/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) _Bool delay;
@property (nonatomic) double threshold;

+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
