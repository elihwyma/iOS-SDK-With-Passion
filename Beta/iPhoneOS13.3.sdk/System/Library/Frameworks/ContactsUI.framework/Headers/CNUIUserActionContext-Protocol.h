/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;

@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@protocol CNUIUserActionContext <Swift>

@property (nonatomic, readonly) id <CNUIUserActionURLOpener> urlOpener;
@property (nonatomic, readonly) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property (nonatomic, readonly) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (nonatomic, readonly) id <CNUIUserActionRecorder> actionRecorder;
@property (nonatomic, readonly) id <CNUIUserActionCurator> actionCurator;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;

@end
