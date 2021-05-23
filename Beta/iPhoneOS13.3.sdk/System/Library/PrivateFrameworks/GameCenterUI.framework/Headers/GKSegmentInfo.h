/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKCollectionViewDataSource, GKPlaceholderContentStateMachine, NSString;

@protocol GKSegmentInfoDelegagte;

@interface GKSegmentInfo : NSObject

{
    id <GKSegmentInfoDelegagte> _delegateWeak;
    GKCollectionViewDataSource *_dataSource;
    NSString *_title;
    GKPlaceholderContentStateMachine *_loadingMatchine;
}

@property (nonatomic) id <GKSegmentInfoDelegagte> delegate;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMatchine;
@property (retain, nonatomic) NSString *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterErrorState;

@end
