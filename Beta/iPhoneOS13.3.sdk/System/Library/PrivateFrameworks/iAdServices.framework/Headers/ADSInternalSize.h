/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@interface ADSInternalSize : NSObject

{
    float _width;
    float _height;
}

@property (nonatomic) float width;
@property (nonatomic) float height;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;

@end
