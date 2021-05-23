/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject

{
    BSMutableSettings *_settings;
}

@property (retain, nonatomic) BSMutableSettings *settings;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=shouldAvoidHitTesting) _Bool avoidHitTesting;

+ (_Bool)supportsSecureCoding;
+ (void)inspectChangesWithOldPolicy:(id)arg1 newPolicy:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
