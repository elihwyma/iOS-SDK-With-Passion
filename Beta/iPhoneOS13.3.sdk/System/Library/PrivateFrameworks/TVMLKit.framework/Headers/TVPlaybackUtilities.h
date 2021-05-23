/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVPlaybackUtilities : NSObject

+ (long long)tvStateForIKState:(long long)arg1;
+ (id)stateStringForTVPlaybackState:(long long)arg1;
+ (id)stateStringForIKState:(long long)arg1;
+ (long long)ikStateForTVPlaybackState:(long long)arg1;

@end
