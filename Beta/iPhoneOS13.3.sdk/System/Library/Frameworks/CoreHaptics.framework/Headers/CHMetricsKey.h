/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHMetricsKey : NSObject

{
    NSString *eventType;
    NSString *intensity;
}

@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSString *intensity;

@end
