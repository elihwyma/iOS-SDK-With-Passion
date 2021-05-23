/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFKeyPath : NSObject

+ (id)evaluateKeyPath:(id)arg1 onObject:(id)arg2 error:(id *)arg3;
+ (id)valueFromArray:(id)arg1 component:(id)arg2 previousKeyPath:(id)arg3 error:(id *)arg4;
+ (id)valueFromDictionary:(id)arg1 component:(id)arg2 previousKeyPath:(id)arg3 isLastComponent:(_Bool)arg4 error:(id *)arg5;

@end
