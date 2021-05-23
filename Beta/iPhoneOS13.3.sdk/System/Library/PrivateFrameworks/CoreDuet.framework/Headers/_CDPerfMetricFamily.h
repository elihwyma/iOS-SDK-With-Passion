/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _CDPerfMetricFamily : NSObject

{
    NSString *_name;
    NSMutableDictionary *_perfMetrics;
}

@property (readonly) NSMutableDictionary *perfMetrics;
@property (readonly) NSString *name;

+ (id)perfMetricFamilyWithName:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1;
- (id)perfMetricWithName:(id)arg1 string:(id)arg2;
- (id)perfMetricWithName:(id)arg1;
- (id)allPerfMetrics;

@end
