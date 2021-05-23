/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

#import <IntentsUI/Swift-Protocol.h>

@class INInteraction;

@interface INUIExtensionRequestInfo : NSObject <Swift>

{
    _Bool _requiresUserConsent;
    INInteraction *_interaction;
}

@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic) _Bool requiresUserConsent;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1;

@end
