/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXEventIOSMACPointerInfoRepresentation : NSObject

{
    _Bool _pressed;
    long long _buttonIndex;
    struct CGPoint _location;
}

@property (nonatomic) _Bool pressed;
@property (nonatomic) long long buttonIndex;
@property (nonatomic) struct CGPoint location;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
