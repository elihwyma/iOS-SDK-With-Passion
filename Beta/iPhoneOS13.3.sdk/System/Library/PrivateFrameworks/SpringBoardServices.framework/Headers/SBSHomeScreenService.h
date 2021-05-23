/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection;

@protocol OS_dispatch_queue;

@interface SBSHomeScreenService : NSObject

{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (nonatomic, getter=isLowDensityIconLayoutEnabled) _Bool lowDensityIconLayoutEnabled;

- (id)init;
- (void)dealloc;
- (void)resetHomeScreenLayoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)folderPathToIconWithBundleIdentifier:(id)arg1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;

@end
