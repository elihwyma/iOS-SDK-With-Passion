/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, NSString;

@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

__attribute__((visibility("hidden")))
@interface TestCNUIUserActionContext : NSObject

{
    _Bool _actionExecutionWasAttemted;
    NSString *_channelIdentifier;
}

@property (copy, nonatomic) NSString *channelIdentifier;
@property (nonatomic) _Bool actionExecutionWasAttemted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CNUIUserActionURLOpener> urlOpener;
@property (nonatomic, readonly) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property (nonatomic, readonly) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (nonatomic, readonly) id <CNUIUserActionRecorder> actionRecorder;
@property (nonatomic, readonly) id <CNUIUserActionCurator> actionCurator;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;

- (id)nilValue;

@end
