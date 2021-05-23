/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ABVCardParameter : NSObject

{
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    _Bool _primary;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (id)initWithName:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)types;
- (void)addType:(id)arg1;
- (_Bool)isPrimary;
- (void)setGrouping:(id)arg1;
- (id)grouping;
- (void)setIsPrimary:(_Bool)arg1;
- (void)addTypes:(id)arg1;

@end
