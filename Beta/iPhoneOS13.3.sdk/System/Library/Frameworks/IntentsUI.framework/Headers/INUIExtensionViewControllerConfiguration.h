/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

#import <IntentsUI/Swift-Protocol.h>

@class NSSet;

@interface INUIExtensionViewControllerConfiguration : NSObject <Swift>

{
    NSSet *_parameters;
    unsigned long long _interactiveBehavior;
    unsigned long long _hostedViewContext;
}

@property (copy, nonatomic, readonly) NSSet *parameters;
@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (nonatomic, readonly) unsigned long long hostedViewContext;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1 interactiveBehavior:(unsigned long long)arg2 hostedViewContext:(unsigned long long)arg3;

@end
