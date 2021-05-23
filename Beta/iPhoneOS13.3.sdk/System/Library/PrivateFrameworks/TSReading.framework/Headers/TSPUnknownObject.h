/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSObject, NSString;

@protocol OS_dispatch_data;

@interface TSPUnknownObject : TSPObject

{
    NSString *_packageLocator;
    NSObject<OS_dispatch_data> *_serializedData;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;

- (id)initWithContext:(id)arg1;
- (id)packageLocator;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
