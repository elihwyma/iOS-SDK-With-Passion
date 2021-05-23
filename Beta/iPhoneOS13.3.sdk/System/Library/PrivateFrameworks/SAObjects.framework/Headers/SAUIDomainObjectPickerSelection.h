/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (retain, nonatomic) SADomainObject *selectedItem;

+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
