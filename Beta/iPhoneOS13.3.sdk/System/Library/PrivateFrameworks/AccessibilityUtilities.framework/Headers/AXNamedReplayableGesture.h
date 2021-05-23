/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXMutableReplayableGesture.h>

@class NSString;

@interface AXNamedReplayableGesture : AXMutableReplayableGesture

{
    _Bool _hasLocalizableName;
    _Bool _shouldPerformAtOriginalLocation;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasLocalizableName;
@property (nonatomic) _Bool shouldPerformAtOriginalLocation;

+ (_Bool)supportsSecureCoding;
+ (id)gestureWithLegacyFormatDictionary:(id)arg1;
+ (id)gestureWithPoints:(id)arg1 times:(id)arg2 forces:(id)arg3;
+ (id)_fingerIdentifierForFingerAtIndex:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)gestureShiftedByOffset:(struct CGPoint)arg1;

@end
