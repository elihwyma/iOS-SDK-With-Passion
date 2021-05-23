/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSObject (NSObject)

+ (id)init;
+ (void)dealloc;
+ (id)description;
+ (void)load;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)_copyDescription;
+ (id)__allocWithZone_OA:(struct _NSZone *)arg1;

- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_copyDescription;
- (void)__dealloc_zombie;
- (id)__retain_OA;
- (oneway void)__release_OA;
- (id)__autorelease_OA;
- (_Bool)___tryRetain_OA;

@end
