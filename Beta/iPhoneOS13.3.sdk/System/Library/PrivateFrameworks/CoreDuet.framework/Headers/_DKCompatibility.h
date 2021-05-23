/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _DKCompatibility : NSObject

{
    long long _min;
    long long _max;
}

@property (nonatomic) long long min;
@property (nonatomic) long long max;

+ (id)currentCompatibility;
+ (id)compatibilityWithMinVersion:(long long)arg1 maxVersion:(long long)arg2;
+ (id)compatibilityFromSerializedCompatibility:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)eventPredicate;
- (id)serialize;
- (id)filterIncompatibleEvents:(id)arg1;

@end
