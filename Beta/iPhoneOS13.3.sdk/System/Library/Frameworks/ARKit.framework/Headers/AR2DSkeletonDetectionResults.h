/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface AR2DSkeletonDetectionResults : NSObject <Swift>

{
    NSArray *_detectedSkeletons;
    double _timestamp;
}

@property (copy, nonatomic) NSArray *detectedSkeletons;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
