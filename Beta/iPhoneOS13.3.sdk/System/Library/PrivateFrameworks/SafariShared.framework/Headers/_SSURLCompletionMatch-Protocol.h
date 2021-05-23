/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol _SSURLCompletionMatch <Swift>

@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *userVisibleURLString;
@property (nonatomic, readonly) long long matchLocation;
@property (nonatomic, readonly, getter=isTopHit) _Bool topHit;
@property (nonatomic, readonly, getter=isSynthesizedTopHit) _Bool synthesizedTopHit;
@property (nonatomic, readonly, getter=isTopHitDueToTriggerMatch) _Bool topHitDueToTriggerMatch;
@property (nonatomic, readonly) long long visitCount;
@property (nonatomic, readonly) NSDate *lastVisitTime;

@end
