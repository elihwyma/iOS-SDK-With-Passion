/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUNotifyObserver <Swift>

@property (copy, nonatomic) CDUnknownBlockType callback;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, getter=isObserving) _Bool observing;

- (unsigned short)beginObserving;
- (unsigned short)endObserving;

@end
