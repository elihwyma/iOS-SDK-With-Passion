/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INPerson, NSString;

@interface INShowPersonInteractionsIntent : INIntent

{
    INPerson *_person;
    NSString *_focusItemIdentifier;
}

@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *focusItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2;

@end
