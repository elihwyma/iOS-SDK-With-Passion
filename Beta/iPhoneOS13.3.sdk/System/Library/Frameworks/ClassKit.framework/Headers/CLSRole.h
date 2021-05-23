/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSArray;

@interface CLSRole : CLSObject

{
    _Bool _isEditable;
    long long _type;
    NSArray *_privileges;
    long long _sourceType;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *privileges;
@property (nonatomic) long long sourceType;
@property _Bool isEditable;

+ (_Bool)supportsSecureCoding;
+ (id)stringForRoleType:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;

@end
