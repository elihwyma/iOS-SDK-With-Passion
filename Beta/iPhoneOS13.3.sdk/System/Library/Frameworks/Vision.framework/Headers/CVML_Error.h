/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CVML_Error : NSObject

+ (id)createNSErrorWithStatus:(long long)arg1 andMessage:(id)arg2;
+ (id)createNSExceptionWithStatus:(long long)arg1 andMessage:(id)arg2;

@end
