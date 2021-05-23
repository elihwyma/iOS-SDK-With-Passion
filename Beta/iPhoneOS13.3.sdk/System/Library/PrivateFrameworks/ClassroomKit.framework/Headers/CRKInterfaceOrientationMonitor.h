/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject

{
    FBSOrientationObserver *mObserver;
    NSMutableArray *mCompletionBlocks;
    _Bool mIsWaitingForFirstUpdate;
    unsigned long long _interfaceOrientation;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (id)init;
- (void)dealloc;
- (CDUnknownBlockType)makeUpdateHandler;
- (void)updateInterfaceOrientationWithNotification:(id)arg1;
- (void)updateInterfaceOrientationWithBSOrientation:(long long)arg1;
- (unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1;
- (void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1;
- (void)interfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;

@end
