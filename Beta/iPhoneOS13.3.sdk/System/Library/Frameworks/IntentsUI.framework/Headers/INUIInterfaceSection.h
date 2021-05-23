/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

#import <IntentsUI/Swift-Protocol.h>

@class NSSet;

@interface INUIInterfaceSection : NSObject <Swift>

{
    unsigned long long _interactiveBehavior;
    NSSet *_parameters;
}

@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (copy, nonatomic, readonly) NSSet *parameters;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;

@end
