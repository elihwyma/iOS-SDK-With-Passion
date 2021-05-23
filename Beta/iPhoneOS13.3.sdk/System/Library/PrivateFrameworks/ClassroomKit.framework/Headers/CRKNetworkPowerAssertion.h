/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKNetworkPowerAssertion : NSObject

{
    unsigned int mPowerAssertion;
    NSString *_name;
    unsigned long long _count;
}

@property (nonatomic) unsigned long long count;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)sharedInstance;
+ (void)decrement;
+ (void)increment;

- (id)init;
- (void)decrement;
- (void)increment;

@end
