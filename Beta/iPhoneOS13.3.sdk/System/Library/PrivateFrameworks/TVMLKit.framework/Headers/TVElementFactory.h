/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVElementFactory : NSObject

+ (void)initialize;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
+ (void)_registerDefaultElements;
+ (void)registerIKClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
+ (void)registerViewElementClass:(Class)arg1 forElementName:(id)arg2;
+ (Class)classForElementType:(unsigned long long)arg1;

@end
