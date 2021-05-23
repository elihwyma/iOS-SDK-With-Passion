/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@protocol FLTelemetryController;

@interface FLTelemetryProcessor : NSObject

{
    NSObject<FLTelemetryController> *_telemetryController;
}

- (id)initWithController:(id)arg1;
- (void)processItemRemoval:(id)arg1;
- (void)processItemAddition:(id)arg1;
- (void)processCurrentItems:(id)arg1;

@end
