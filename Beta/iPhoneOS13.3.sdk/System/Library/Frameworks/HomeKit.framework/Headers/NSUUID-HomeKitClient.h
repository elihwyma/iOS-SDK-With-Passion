/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)

+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(_Bool)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;

- (id)convertToData;

@end
