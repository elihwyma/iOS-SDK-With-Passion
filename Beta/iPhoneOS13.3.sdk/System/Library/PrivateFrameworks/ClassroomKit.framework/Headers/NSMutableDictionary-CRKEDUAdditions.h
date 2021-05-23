/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (CRKEDUAdditions)

- (id)crk_validateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(_Bool)arg2 outError:(id *)arg3;
- (id)crk_validateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 allowZeroLengthString:(_Bool)arg4 outError:(id *)arg5;

@end
