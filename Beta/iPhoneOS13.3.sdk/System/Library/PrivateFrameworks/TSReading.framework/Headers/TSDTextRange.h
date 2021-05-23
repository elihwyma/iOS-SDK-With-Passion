/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITextRange.h>

@interface TSDTextRange : UITextRange

{
    struct _NSRange _range;
    _Bool _eolAffinity;
    float _preferredStartPosition;
    float _preferredEndPosition;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) _Bool isAtEndOfLine;
@property (nonatomic, readonly) float preferredStartPosition;
@property (nonatomic, readonly) float preferredEndPosition;

+ (id)textRangeWithRange:(struct _NSRange)arg1;
+ (id)textRangeWithRange:(struct _NSRange)arg1 eolAffinity:(_Bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)start;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)end;
- (id)initWithRange:(struct _NSRange)arg1 eolAffinity:(_Bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;

@end
