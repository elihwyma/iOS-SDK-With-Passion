/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@interface ASDCoding : NSObject

+ (_Bool)securelyEncodeObject:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 error:(id *)arg4;
+ (id)_findNonSecureClassesFromObject:(id)arg1;
+ (id)createDataByEncodingError:(id)arg1;
+ (id)createErrorByDecodingData:(id)arg1;

@end
