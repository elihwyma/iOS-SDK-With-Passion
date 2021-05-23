/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSDate, NSDictionary, NSString;

@interface WBSAddressBookMatch : WBSFormAutoFillItem

{
    id _value;
    NSString *_property;
    NSString *_key;
    NSString *_identifier;
    NSString *_label;
    NSString *_uniqueID;
}

@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSString *property;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)addressBookMatchWithDictionaryRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)completion;
- (void)_setValue:(id)arg1;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 uniqueID:(id)arg6;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4;

@end
