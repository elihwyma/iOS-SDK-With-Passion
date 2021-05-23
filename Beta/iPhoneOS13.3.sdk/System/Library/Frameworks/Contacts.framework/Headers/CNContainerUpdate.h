/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContainerPropertyDescription, NSString;

__attribute__((visibility("hidden")))
@interface CNContainerUpdate : NSObject

{
    CNContainerPropertyDescription *_property;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)updateWithValue:(id)arg1 property:(id)arg2;

- (id)value;
- (id)property;
- (id)initWithProperty:(id)arg1 value:(id)arg2;
- (void)applyToMutableContainer:(id)arg1;

@end
