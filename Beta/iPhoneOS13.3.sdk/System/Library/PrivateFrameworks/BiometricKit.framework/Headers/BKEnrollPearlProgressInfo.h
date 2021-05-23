/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSArray;

@interface BKEnrollPearlProgressInfo : NSObject

{
    long long _percentageCompleted;
    NSArray *_enrolledPoses;
}

@property (nonatomic) long long percentageCompleted;
@property (retain, nonatomic) NSArray *enrolledPoses;

- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPercents:(long long)arg1;
- (id)initFromEnrollInfo:(const CDStruct_b5879008 *)arg1;

@end
