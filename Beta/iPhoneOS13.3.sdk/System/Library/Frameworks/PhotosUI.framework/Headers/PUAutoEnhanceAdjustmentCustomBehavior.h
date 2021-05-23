/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUAdjustmentsDataSource;

__attribute__((visibility("hidden")))
@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject

{
    PUAdjustmentsDataSource *_dataSource;
}

@property (weak, nonatomic) PUAdjustmentsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
