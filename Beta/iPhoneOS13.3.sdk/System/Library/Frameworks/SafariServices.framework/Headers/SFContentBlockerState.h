/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface SFContentBlockerState : NSObject

{
    _Bool _enabled;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(_Bool)arg1;

@end
