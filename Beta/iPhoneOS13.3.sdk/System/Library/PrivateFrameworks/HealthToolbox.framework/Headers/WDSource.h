/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKDevice, HKSourceDataModel, NSString;

__attribute__((visibility("hidden")))
@interface WDSource : NSObject

{
    HKSourceDataModel *_sourceModel;
    HKDevice *_device;
    NSString *_name;
}

@property (nonatomic, readonly) HKSourceDataModel *sourceModel;
@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSString *name;

- (id)initWithSource:(id)arg1 device:(id)arg2;

@end
