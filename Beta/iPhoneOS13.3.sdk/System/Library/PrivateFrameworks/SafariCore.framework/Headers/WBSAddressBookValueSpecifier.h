/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject

{
    NSString *_property;
    NSString *_component;
    NSString *_label;
    NSString *_category;
    NSString *_parentProperty;
}

@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *parentProperty;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3;

@end
