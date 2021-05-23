/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _AFInterstitialAction : NSObject

{
    long long _phase;
    NSString *_displayKey;
    NSString *_speakableKey;
    double _duration;
}

@property (nonatomic, readonly) long long phase;
@property (copy, nonatomic, readonly) NSString *displayKey;
@property (copy, nonatomic, readonly) NSString *speakableKey;
@property (nonatomic, readonly) double duration;

- (id)initWithDuration:(double)arg1;
- (id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3;

@end
