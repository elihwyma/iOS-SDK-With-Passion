/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FigTimeObj : NSObject

{
    struct FigTime _time;
}

+ (_Bool)supportsSecureCoding;
+ (id)timeWithTime:(struct FigTime)arg1;
+ (_Bool)classIsAbstract;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)getValue:(struct FigTime *)arg1;
- (struct FigTime)time;
- (id).cxx_construct;
- (void)setTime:(struct FigTime)arg1;
- (id)initWithFigTime:(struct FigTime)arg1;
- (long long)compareWithTime:(id)arg1;

@end
