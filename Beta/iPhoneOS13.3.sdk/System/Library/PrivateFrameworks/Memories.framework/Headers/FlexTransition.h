/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FlexTransition : NSObject

{
    _Bool _prevented;
    _Bool _useNextSegmentForFadeOut;
    long long _fadeOut;
    long long _fadeIn;
    NSString *_transitionSegmentName;
}

@property (nonatomic, readonly) _Bool prevented;
@property (nonatomic, readonly) long long fadeOut;
@property (nonatomic, readonly) long long fadeIn;
@property (copy, nonatomic, readonly) NSString *transitionSegmentName;
@property (nonatomic, readonly) _Bool useNextSegmentForFadeOut;

+ (long long)validFadeLengthForLength:(long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)encodeAsDictionary;
- (_Bool)isDefaultTransition;
- (id)initWithTransitionSegmentNamed:(id)arg1 prevented:(_Bool)arg2 fadeOut:(long long)arg3 fadeIn:(long long)arg4 useNextSegmentForFadeOut:(_Bool)arg5;

@end
