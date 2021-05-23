/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@interface HMBModelFieldOption : HMFObject

+ (id)excludeFromCloudStorage;
+ (id)externalRecordField:(id)arg1;
+ (id)encryptedExternalRecordField:(id)arg1;
+ (id)queryableField;
+ (id)queryableFieldWithEncodeBlock:(CDUnknownBlockType)arg1 decodeBlock:(CDUnknownBlockType)arg2;
+ (id)queryableFieldWithEncodeBlock:(CDUnknownBlockType)arg1 decodeBlock:(CDUnknownBlockType)arg2 descriptionBlock:(CDUnknownBlockType)arg3;

- (void)applyTo:(id)arg1;

@end
