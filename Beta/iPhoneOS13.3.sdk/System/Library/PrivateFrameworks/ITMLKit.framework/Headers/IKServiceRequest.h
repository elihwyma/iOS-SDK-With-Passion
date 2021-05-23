/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKServiceContext;

@protocol IKServiceRequestDelegate;

@interface IKServiceRequest : NSObject

{
    int _state;
    struct {
        _Bool hasDidCompleteWithStatus;
    } _srDelegateFlags;
    IKAppContext *_appContext;
    IKServiceContext *_serviceContext;
    id <IKServiceRequestDelegate> _delegate;
}

@property (weak, nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) IKServiceContext *serviceContext;
@property (weak, nonatomic) id <IKServiceRequestDelegate> delegate;

- (void)cancel;
- (void)send;
- (void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (id)initWithAppContext:(id)arg1 serviceContext:(id)arg2;

@end
