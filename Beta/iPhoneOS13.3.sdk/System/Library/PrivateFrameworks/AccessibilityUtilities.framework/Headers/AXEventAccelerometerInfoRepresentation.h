/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventAccelerometerInfoRepresentation : NSObject

{
    unsigned int _type;
    float _x;
    float _y;
    float _z;
}

@property (nonatomic) unsigned int type;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;

@end
