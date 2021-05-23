/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSString;

@interface CLSHandoutRecipient : CLSObject

{
    NSString *_classID;
    NSString *_personID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *personID;
@property (nonatomic, readonly) NSString *parentObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithClassID:(id)arg1 personID:(id)arg2;

@end
