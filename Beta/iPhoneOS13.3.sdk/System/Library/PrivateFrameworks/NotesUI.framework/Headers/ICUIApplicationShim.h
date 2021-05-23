/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIWindow;

@protocol ICUIApplicationShimDelegate;

@interface ICUIApplicationShim : NSObject

{
    id <ICUIApplicationShimDelegate> _delegate;
}

@property (retain, nonatomic) id <ICUIApplicationShimDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIWindow *keyWindow;

+ (id)sharedInstance;

- (void)beginReceivingRemoteControlEvents;
- (void)endReceivingRemoteControlEvents;

@end
