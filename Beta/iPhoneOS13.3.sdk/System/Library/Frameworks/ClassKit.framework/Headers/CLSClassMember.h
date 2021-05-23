/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSString;

@interface CLSClassMember : CLSObject

{
    _Bool _markedForDeletion;
    NSString *_personID;
    unsigned long long _roles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *personID;
@property (nonatomic) unsigned long long roles;
@property (nonatomic) _Bool markedForDeletion;

+ (_Bool)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3;

@end
