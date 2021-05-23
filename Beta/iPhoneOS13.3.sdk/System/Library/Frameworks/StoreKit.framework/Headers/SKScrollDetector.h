/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol SKScreenTrackingDelegate;

__attribute__((visibility("hidden")))
@interface SKScrollDetector : NSObject

{
    id <SKScreenTrackingDelegate> _screenTrakingDelegate;
    NSMutableArray *_subscribedScrollers;
}

@property (retain, nonatomic) NSMutableArray *subscribedScrollers;
@property (weak, nonatomic) id <SKScreenTrackingDelegate> screenTrakingDelegate;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)findAndListenForScrollingOfView:(id)arg1;
- (void)stopListeningForScrollingOfView:(id)arg1;

@end
