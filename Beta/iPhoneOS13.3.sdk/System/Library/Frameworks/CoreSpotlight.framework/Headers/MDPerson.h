/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSPerson.h>

@class NSString;

@interface MDPerson : CSPerson

@property (readonly) NSString *handle;

+ (_Bool)supportsSecureCoding;

- (id)initWithDisplayName:(id)arg1 handle:(id)arg2 handleIdentifier:(id)arg3;

@end
