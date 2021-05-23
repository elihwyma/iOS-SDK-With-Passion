/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITextPosition.h>

@interface TSDTextPosition : UITextPosition

{
    unsigned long long _charIndex;
    _Bool _eolAffinity;
    float _preferredPosition;
    _Bool _isPreferredStart;
}

@property (nonatomic, readonly) unsigned long long charIndex;
@property (nonatomic, readonly) _Bool endOfLineAffinity;
@property (nonatomic, readonly) float preferredPosition;
@property (nonatomic, readonly) _Bool isPreferredStart;

+ (id)textPositionWithCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(_Bool)arg4;
+ (id)textPositionWithCharIndex:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(_Bool)arg4;
- (id)initWithCharIndex:(unsigned long long)arg1;

@end
