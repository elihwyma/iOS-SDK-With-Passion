/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSJSONSerialization : NSObject

{
    void *reserved[6];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)isValidJSONObject:(id)arg1;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)init;

@end
