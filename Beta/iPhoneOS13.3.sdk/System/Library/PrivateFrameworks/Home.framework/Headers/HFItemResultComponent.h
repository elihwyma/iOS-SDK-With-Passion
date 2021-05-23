/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface HFItemResultComponent : NSObject

{
    long long _componentPriority;
}

@property (copy, nonatomic, readonly) NSDictionary *results;
@property (nonatomic, readonly) long long componentPriority;

+ (id)combinedResultsForComponents:(id)arg1;

@end
