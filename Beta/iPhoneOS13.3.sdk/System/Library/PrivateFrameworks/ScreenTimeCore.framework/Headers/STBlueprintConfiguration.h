/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, STBlueprint;

@protocol STSerializableManagedObject;

@interface STBlueprintConfiguration : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSData *payloadPlist;
@property (retain, nonatomic) STBlueprint *blueprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <STSerializableManagedObject> syncableRootObject;

+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2;
+ (Class)cemDeclarationClassForConfigurationType:(id)arg1;
+ (id)blueprintConfigurationTypeForDeclaration:(id)arg1;

- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)cemConfiguration;
- (void)setCemConfiguration:(id)arg1;

@end
