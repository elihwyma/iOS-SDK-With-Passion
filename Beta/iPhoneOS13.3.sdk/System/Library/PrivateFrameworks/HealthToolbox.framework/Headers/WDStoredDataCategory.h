/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKDisplayCategory, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDStoredDataCategory : NSObject

{
    NSMutableArray *_displayTypes;
    HKDisplayCategory *_category;
}

@property (retain) HKDisplayCategory *category;
@property (nonatomic, readonly) NSMutableArray *displayTypes;

@end
