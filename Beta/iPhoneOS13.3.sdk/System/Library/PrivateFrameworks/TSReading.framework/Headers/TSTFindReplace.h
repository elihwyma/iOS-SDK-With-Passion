/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTFindReplace : NSObject

+ (void)p_searchInfo:(id)arg1 layout:(id)arg2 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg3;
+ (void)searchInfo:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (void)searchLayout:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (void)searchLayout:(id)arg1 forSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;
+ (void)searchInfo:(id)arg1 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg2;
+ (void)searchLayout:(id)arg1 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg2;

@end
