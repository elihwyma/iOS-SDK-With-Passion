/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _PointQueue : NSObject

{
    NSMutableArray *_nonSentinelPoints;
}

@property (nonatomic, readonly) NSMutableArray *nonSentinelPoints;

- (id)init;
- (unsigned long long)effectiveStartIndexBasedOnLength;

@end
