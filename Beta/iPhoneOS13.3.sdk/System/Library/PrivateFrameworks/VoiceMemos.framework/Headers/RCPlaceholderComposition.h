/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCComposition.h>

@interface RCPlaceholderComposition : RCComposition

{
    RCComposition *_underlyingComposition;
}

@property (nonatomic, readonly) RCComposition *underlyingComposition;

- (id)initWithUnderlyingComposition:(id)arg1;

@end
