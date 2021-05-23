/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSDate, NSMutableSet, NSSet, NSString, NSURL;

@interface ACCredentialItem : NSObject

{
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    _Bool _persistent;
    NSURL *_objectID;
    ACAccountStore *_accountStore;
    NSMutableSet *_dirtyProperties;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, getter=isPersistent) _Bool persistent;
@property (retain, nonatomic) NSURL *objectID;
@property (weak, nonatomic) ACAccountStore *accountStore;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setServiceName:(id)arg1;
- (id)fullDescription;
- (void)clearDirtyProperties;
- (id)_initWithProtobuf:(id)arg1;
- (id)_encodeProtobuf;
- (_Bool)isPropertyDirty:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (id)_encodeProtobufData;
- (void)markAllPropertiesDirty;
- (void)setAccountIdentifier:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;

@end
