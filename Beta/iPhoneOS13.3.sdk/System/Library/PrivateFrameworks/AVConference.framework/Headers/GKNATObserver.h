/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol GKNATObserverDelegate;

@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)initWithOptions:(id)arg1;
- (int)currentNATType;
- (void)shouldTryNATCheck;

@end
