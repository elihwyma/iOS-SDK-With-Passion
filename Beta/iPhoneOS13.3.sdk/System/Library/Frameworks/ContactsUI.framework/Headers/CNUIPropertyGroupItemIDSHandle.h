/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactProperty, CNUIContactPropertyIDSHandle, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPropertyGroupItemIDSHandle : NSObject

{
    CNContactProperty *_contactProperty;
    CNUIContactPropertyIDSHandle *_contactPropertyHandle;
}

@property (nonatomic, readonly) CNUIContactPropertyIDSHandle *contactPropertyHandle;
@property (copy, nonatomic, readonly) CNContactProperty *contactProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *_cnui_IDSIDRepresentation;

+ (_Bool)supportsPropertyGroupItem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyGroupItem:(id)arg1;

@end
