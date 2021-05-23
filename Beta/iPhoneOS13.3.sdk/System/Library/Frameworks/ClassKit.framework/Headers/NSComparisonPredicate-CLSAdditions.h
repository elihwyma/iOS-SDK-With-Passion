/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (CLSAdditions)

+ (id)cls_allowedRightKeyPathArrays;

- (id)cls_normalizedPredicate:(id)arg1 error:(id *)arg2;
- (id)cls_validatedRightKeyPathExpression:(id)arg1 leftKeyPath:(id)arg2 forAllowedKeyPaths:(id)arg3 normalizer:(id)arg4 error:(id *)arg5;

@end
