/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@interface REImage : NSObject <Swift>

+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
