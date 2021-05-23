/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_addressBook;
    CoreDAVItemWithNoChildren *_searchAddressBook;
    CoreDAVItemWithNoChildren *_shared;
    CoreDAVItemWithNoChildren *_principal;
    CoreDAVItemWithNoChildren *_collection;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *addressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *searchAddressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *shared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *principal;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *collection;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (nonatomic, readonly) NSSet *stringSet;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)write:(id)arg1;
- (_Bool)isTypeWithNameSpace:(id)arg1 andName:(id)arg2;

@end
