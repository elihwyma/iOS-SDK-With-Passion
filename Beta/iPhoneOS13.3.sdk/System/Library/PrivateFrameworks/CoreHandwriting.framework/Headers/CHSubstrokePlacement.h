/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject

{
    CHSubstroke *_substroke;
    long long _originalWritingDirectionIndex;
    struct CGVector _writingOrientation;
    struct CGVector _strokeDeviation;
    struct CGPoint _coalescedCenter;
}

@property (retain, nonatomic, readonly) CHSubstroke *substroke;
@property (nonatomic) struct CGVector writingOrientation;
@property (nonatomic) struct CGVector strokeDeviation;
@property (nonatomic) long long originalWritingDirectionIndex;
@property (nonatomic) struct CGPoint coalescedCenter;
@property (nonatomic, readonly) struct CGRect rotatedBounds;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubstroke:(id)arg1;

@end
