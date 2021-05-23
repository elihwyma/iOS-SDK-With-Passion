/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedData : NSObject

{
    NSString *_version;
    NSMutableArray *_latencies;
    NSMutableArray *_preferredModes;
}

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *latencies;
@property (retain, nonatomic) NSMutableArray *preferredModes;

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;
+ (id)supportedClasses;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (void)update;
- (void)setLatency:(double)arg1 forUUID:(id)arg2 andMode:(struct Mode)arg3;
- (double)latencyForUUID:(id)arg1 andMode:(struct Mode)arg2;
- (void)setPreferredMode:(struct Mode)arg1 forUUID:(id)arg2;
- (struct Mode)preferredModeForUUID:(id)arg1;

@end
