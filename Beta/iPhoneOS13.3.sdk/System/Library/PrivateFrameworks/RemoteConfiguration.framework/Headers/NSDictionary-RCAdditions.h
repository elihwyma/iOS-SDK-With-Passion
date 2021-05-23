/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSDictionary.h>

@interface NSDictionary (RCAdditions)

+ (id)rc_dictionaryFromData:(id)arg1 error:(id *)arg2;
+ (id)rc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)rc_dictionaryFromJSON:(id)arg1;

- (id)rc_subdictionaryForKeys:(id)arg1;
- (id)rc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)rc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;

@end
