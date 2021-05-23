/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_setValues:(id)arg1 forProperties:(id)arg2 withEntityClass:(Class)arg3 usingPersistentID:(long long)arg4 connection:(id)arg5 error:(id *)arg6;

@end
