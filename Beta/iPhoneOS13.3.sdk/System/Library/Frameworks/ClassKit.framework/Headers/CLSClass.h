/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface CLSClass : CLSObject

{
    _Bool _isEditable;
    NSString *_className;
    long long _source;
    NSString *_iconID;
    NSString *_locationID;
    long long _originatingSource;
    NSString *_customClassName;
    NSString *_tempObjectID;
    NSString *_searchText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *customClassName;
@property _Bool isEditable;
@property (copy, nonatomic) NSString *tempObjectID;
@property (nonatomic) long long source;
@property (nonatomic) long long originatingSource;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *iconID;
@property (nonatomic, readonly) NSArray *classMembers;
@property (copy, nonatomic) NSString *locationID;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *emailAddress;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)setDisplayName:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithLocation:(id)arg1 customName:(id)arg2;
- (void)addPerson:(id)arg1 withRole:(unsigned long long)arg2;
- (void)removePerson:(id)arg1 withRole:(unsigned long long)arg2;

@end
