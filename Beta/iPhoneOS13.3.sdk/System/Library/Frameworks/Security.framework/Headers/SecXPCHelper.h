/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@interface SecXPCHelper : NSObject

+ (id)safeErrorPrimitiveClasses;
+ (id)safeErrorCollectionClasses;
+ (id)safeErrorClasses;
+ (id)cleanDictionaryForXPC:(id)arg1;
+ (id)cleanObjectForXPC:(id)arg1;
+ (id)cleanseErrorForXPC:(id)arg1;
+ (id)errorFromEncodedData:(id)arg1;
+ (id)encodedDataFromError:(id)arg1;

@end
