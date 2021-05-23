/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBPresentationObservationToken : NSObject

{
    long long _state;
    CDUnknownBlockType _willPresentHandler;
    CDUnknownBlockType _didPresentHandler;
    CDUnknownBlockType _willDismissHandler;
    CDUnknownBlockType _didDismissHandler;
}

@property (nonatomic, readonly) long long state;
@property (copy, nonatomic) CDUnknownBlockType willPresentHandler;
@property (copy, nonatomic) CDUnknownBlockType didPresentHandler;
@property (copy, nonatomic) CDUnknownBlockType willDismissHandler;
@property (copy, nonatomic) CDUnknownBlockType didDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)didPresent;
- (void)willPresent;
- (void)willDismiss;
- (void)didDismiss;

@end
