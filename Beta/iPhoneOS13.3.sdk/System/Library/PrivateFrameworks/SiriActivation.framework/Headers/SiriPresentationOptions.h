/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@interface SiriPresentationOptions : NSObject

{
    _Bool _wakeScreen;
    _Bool _hideOtherWindowsDuringAppearance;
}

@property (nonatomic) _Bool wakeScreen;
@property (nonatomic) _Bool hideOtherWindowsDuringAppearance;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
