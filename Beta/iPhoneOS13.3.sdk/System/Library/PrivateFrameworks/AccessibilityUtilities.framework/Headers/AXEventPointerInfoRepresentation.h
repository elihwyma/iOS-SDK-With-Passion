/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventPointerInfoRepresentation : NSObject

{
    double _pointerX;
    double _pointerY;
    double _pointerZ;
    double _pointerAccelX;
    double _pointerAccelY;
    double _pointerAccelZ;
    double _pointerButtonMask;
    double _pointerButtonNumber;
    double _pointerButtonClickCount;
    double _pointerButtonPressure;
}

@property (nonatomic) double pointerX;
@property (nonatomic) double pointerY;
@property (nonatomic) double pointerZ;
@property (nonatomic) double pointerAccelX;
@property (nonatomic) double pointerAccelY;
@property (nonatomic) double pointerAccelZ;
@property (nonatomic) double pointerButtonMask;
@property (nonatomic) double pointerButtonNumber;
@property (nonatomic) double pointerButtonClickCount;
@property (nonatomic) double pointerButtonPressure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;

@end
