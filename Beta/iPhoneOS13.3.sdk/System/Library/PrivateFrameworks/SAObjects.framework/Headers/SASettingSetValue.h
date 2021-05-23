/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (nonatomic) _Bool dryRun;
@property (nonatomic) _Bool failOnSiriDisconnectWarnings;

+ (id)setValue;
+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
