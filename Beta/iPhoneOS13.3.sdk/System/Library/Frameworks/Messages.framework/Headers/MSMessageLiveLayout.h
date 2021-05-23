/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Messages/MSMessageLayout.h>

@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout

{
    MSMessageTemplateLayout *_alternateLayout;
}

@property (nonatomic, readonly) MSMessageTemplateLayout *alternateLayout;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlternateLayout:(id)arg1;

@end
