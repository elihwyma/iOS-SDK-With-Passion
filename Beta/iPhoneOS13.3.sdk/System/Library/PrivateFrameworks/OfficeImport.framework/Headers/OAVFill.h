/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVFill : NSObject

+ (void)readGradientFill:(id)arg1 fromManager:(id)arg2;
+ (id)readBlipRefFromManager:(id)arg1 state:(id)arg2;
+ (id)targetBgColorWithManager:(id)arg1;
+ (void)addStopsFromArray:(const struct OAVGradientStop *)arg1 stopCount:(int)arg2 inverted:(_Bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7;
+ (void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3;
+ (id)readFromManager:(id)arg1 state:(id)arg2;
+ (id)targetFgColorWithManager:(id)arg1;

@end
