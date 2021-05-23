/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class BSServiceConnectionEndpoint, NSString;

@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@interface CNUIUserActionContext : NSObject

{
    id <CNUIUserActionURLOpener> _urlOpener;
    id <CNUIUserActionUserActivityOpener> _userActivityOpener;
    id <CNUIUserActionDialRequestOpener> _dialRequestOpener;
    id <CNUIUserActionRecorder> _actionRecorder;
    id <CNUIUserActionCurator> _actionCurator;
    NSString *_channelIdentifier;
    BSServiceConnectionEndpoint *_connectionEndpoint;
}

@property (retain, nonatomic) id <CNUIUserActionURLOpener> urlOpener;
@property (retain, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property (retain, nonatomic) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (retain, nonatomic) id <CNUIUserActionRecorder> actionRecorder;
@property (retain, nonatomic) id <CNUIUserActionCurator> actionCurator;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;
+ (id)contextWithExtensionContext:(id)arg1;
+ (id)makeDefaultContext;

- (id)init;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;

@end
