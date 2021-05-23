/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class APSConnection, CKContainer;

@protocol APSConnectionDelegate;

@interface CRKCloudCreatePushConnectionOperation : CATOperation

{
    APSConnection *mPushConnection;
    id <APSConnectionDelegate> _delegate;
    CKContainer *_container;
}

@property (nonatomic, readonly) id <APSConnectionDelegate> delegate;
@property (nonatomic, readonly) CKContainer *container;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithDelegate:(id)arg1 container:(id)arg2;
- (id)pushConnectionForEnvironment:(id)arg1;
- (id)buildPushTopic;

@end
