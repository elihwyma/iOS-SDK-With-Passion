/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKIndexableObject : NSObject

{
    id _object;
    unsigned long long _compoundIndex;
}

@property (copy, nonatomic, readonly) id object;
@property (nonatomic, readonly) unsigned long long compoundIndex;
@property (nonatomic, readonly) unsigned char outermostIndex;

+ (id)indexableObjectWithObject:(id)arg1;
+ (id)indexableObjectWithObject:(id)arg1 index:(unsigned char)arg2 error:(id *)arg3;
+ (id)indexableObjectsByApplyingOutermostIndex:(id)arg1 expectedCount:(long long)arg2 error:(id *)arg3;
+ (id)indexableObjectWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;

- (id)init;
- (id)initWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;
- (id)indexableObjectPoppingIndexWithError:(id *)arg1;
- (id)indexableObjectCollectingPushingIndex:(unsigned char)arg1 error:(id *)arg2;

@end
