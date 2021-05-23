/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@protocol CHStrokeIdentifier;

@interface CHNonTextCandidateStroke : NSObject

{
    NSMutableDictionary *_supportByStrokeIdentifier;
    double _support;
    id <CHStrokeIdentifier> _strokeIdentifier;
    long long _classificationAsNonText;
    long long _substrokesCount;
    double _lineError;
    double _containerScore;
    double _lineOrientationAngle;
    double _boundsDiagonal;
    struct CGRect _bounds;
    struct CGRect _enlargedBounds;
    struct CGRect _rotatedBounds;
}

@property (nonatomic, readonly) long long classificationAsNonText;
@property (nonatomic, readonly) long long substrokesCount;
@property (retain, nonatomic, readonly) NSDictionary *supportByStrokeIdentifier;
@property (nonatomic, readonly) double lineError;
@property (nonatomic, readonly) double containerScore;
@property (nonatomic, readonly) double lineOrientationAngle;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double boundsDiagonal;
@property (nonatomic, readonly) struct CGRect enlargedBounds;
@property (nonatomic, readonly) struct CGRect rotatedBounds;
@property (retain, nonatomic, readonly) id <CHStrokeIdentifier> strokeIdentifier;
@property (nonatomic, readonly) long long effectiveClassification;
@property (nonatomic, readonly) double support;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 bounds:(struct CGRect)arg7 boundsDiagonal:(double)arg8 enlargedBounds:(struct CGRect)arg9 rotatedBounds:(struct CGRect)arg10 supportByStrokeIdentifier:(id)arg11 support:(double)arg12;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6;

@end
