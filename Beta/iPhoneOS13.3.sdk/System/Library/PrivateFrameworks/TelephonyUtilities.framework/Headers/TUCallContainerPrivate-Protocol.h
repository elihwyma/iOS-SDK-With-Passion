/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, TUCall;

@protocol TUCallContainerPrivate <Swift>

@property (copy, nonatomic, readonly) NSArray *_allCalls;
@property (nonatomic, readonly) TUCall *displayedCall;
@property (nonatomic, readonly) TUCall *conferenceCall;
@property (nonatomic, readonly) TUCall *frontmostCall;
@property (retain, nonatomic, readonly) TUCall *frontmostAudioOrVideoCall;
@property (nonatomic, readonly) _Bool existingCallsHaveMultipleProviders;

- (unsigned short)callPassingTest:sortedUsingComparator: /* Error: Ran out of types for this method. */;

@end
