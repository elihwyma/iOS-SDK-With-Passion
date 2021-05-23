/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class CXCallObserver, NSDate, NSString;

@interface IMCallMonitor : NSObject

{
    CXCallObserver *_callCenter;
    _Bool _wasOnCall;
    NSDate *_lastCallDate;
}

@property (nonatomic, readonly) _Bool isOnCall;
@property (retain, nonatomic, readonly) NSDate *dateLastCallEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;

@end
