/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PXCPLServiceUIStatus : NSObject

{
    _Bool _paused;
    float _progress;
    NSString *_referencedItemsDescription;
    NSString *_stateDescription;
    NSString *_failureDescription;
    CDUnknownBlockType _action;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertSubtitle;
    NSString *_actionConfirmationAlertButtonTitle;
    long long _serviceAction;
}

@property (retain, nonatomic) NSString *referencedItemsDescription;
@property (retain, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *failureDescription;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) float progress;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (retain, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertTitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (nonatomic) long long serviceAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
