/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PFAdjustmentSerialization : NSObject

+ (id)serializeAdjustments:(id)arg1 error:(id *)arg2;
+ (id)deserializeAdjustmentsFromData:(id)arg1 error:(id *)arg2;
+ (id)serializeDictionary:(id)arg1 error:(id *)arg2;
+ (id)deserializeDictionaryFromData:(id)arg1 error:(id *)arg2;
+ (_Bool)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4;
+ (_Bool)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3;

@end
