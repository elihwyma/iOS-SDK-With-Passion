/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSActivityItem.h>

@interface CLSBinaryItem : CLSActivityItem

{
    _Bool _value;
    long long _valueType;
}

@property (nonatomic) long long valueType;
@property (nonatomic) _Bool value;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3;

@end
