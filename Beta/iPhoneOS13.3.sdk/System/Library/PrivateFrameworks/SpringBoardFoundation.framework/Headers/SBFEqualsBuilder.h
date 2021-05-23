/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFEqualsBuilder : NSObject

+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2;
+ (_Bool)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (_Bool)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isBool:(_Bool)arg1 equalToOther:(_Bool)arg2;
+ (_Bool)evaluateBuilderBlock:(CDUnknownBlockType)arg1 remainingBlocks:(char *)arg2;
+ (_Bool)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isSize:(struct CGSize)arg1 equalToOther:(struct CGSize)arg2;

@end
