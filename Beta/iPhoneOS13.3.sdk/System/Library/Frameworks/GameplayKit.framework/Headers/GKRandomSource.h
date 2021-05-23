/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKRandomSource : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)sharedRandom;
+ (id)systemRandom;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (long long)nextInt;
- (float)nextUniform;
- (_Bool)nextBool;
- (id)arrayByShufflingObjectsInArray:(id)arg1;

@end
