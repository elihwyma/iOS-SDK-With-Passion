/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _CDSizeMetricFamily : NSObject

{
    NSString *_name;
    NSMutableDictionary *_sizeMetrics;
}

@property (readonly) NSMutableDictionary *sizeMetrics;
@property (readonly) NSString *name;

+ (id)sizeMetricFamilyWithName:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1;
- (id)sizeMetricWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3;
- (id)sizeMetricWithName:(id)arg1;
- (id)allSizeMetrics;

@end
