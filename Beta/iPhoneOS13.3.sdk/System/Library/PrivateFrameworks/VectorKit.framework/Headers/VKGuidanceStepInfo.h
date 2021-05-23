/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGuidanceStepInfo : NSObject

{
    NSString *_roadName;
    int _routePoint;
}

@property (retain, nonatomic, readonly) NSString *roadName;
@property (nonatomic, readonly) int routePoint;

- (void)dealloc;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;

@end
