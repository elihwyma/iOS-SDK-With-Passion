/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactProperty, NSString;

@interface CNUIContactPropertyIDSHandle : NSObject

{
    CNContactProperty *_contactProperty;
    NSString *_idsID;
}

@property (copy, nonatomic, readonly) NSString *idsID;
@property (copy, nonatomic, readonly) CNContactProperty *contactProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *_cnui_IDSIDRepresentation;

+ (id)supportedContactPropertyKeys;
+ (id)idsIDForPhoneNumber:(id)arg1;
+ (id)idsIDForEmail:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContactProperty:(id)arg1;

@end
