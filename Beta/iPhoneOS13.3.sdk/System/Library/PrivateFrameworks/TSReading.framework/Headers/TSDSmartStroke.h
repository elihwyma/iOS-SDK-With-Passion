/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStroke.h>

@class NSString;

@interface TSDSmartStroke : TSDStroke

{
    NSString *mStrokeName;
}

@property (copy, nonatomic) NSString *strokeName;

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)classForName:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (_Bool)canApplyDirectlyToRepCALayer;
- (_Bool)shouldAntialiasDefeat;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;

@end
