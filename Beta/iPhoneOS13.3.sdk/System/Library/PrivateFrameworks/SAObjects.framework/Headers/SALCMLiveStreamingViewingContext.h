/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *eventStartTime;
@property (nonatomic) _Bool watchingLive;

+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
