/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@protocol MPCPlayerFeedbackCommand <Swift>

@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedShortTitle;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) _Bool value;

- (unsigned short)changeValue: /* Error: Ran out of types for this method. */;

@end
