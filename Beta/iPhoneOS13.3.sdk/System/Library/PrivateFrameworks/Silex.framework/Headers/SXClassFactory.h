/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXClassFactory : NSObject

+ (void)initialize;
+ (CDUnknownBlockType)valueClassBlockForBaseClass:(Class)arg1;
+ (void)registerClass:(Class)arg1 type:(id)arg2 baseClass:(Class)arg3;
+ (Class)classForBaseClass:(Class)arg1 type:(id)arg2;
+ (void)startTesting;
+ (void)stopTesting;

@end
