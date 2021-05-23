/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MaintenanceActivity : NSObject

{
    CDUnknownBlockType _activityBlock;
    NSObject<OS_dispatch_queue> *_activityQueue;
    NSString *_activityIdentifier;
}

@property (copy, nonatomic) CDUnknownBlockType activityBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSString *activityIdentifier;

@end
