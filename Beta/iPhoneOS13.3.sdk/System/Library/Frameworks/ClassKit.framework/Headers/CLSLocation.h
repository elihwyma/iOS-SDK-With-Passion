/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSPersonNameComponents, NSString;

@interface CLSLocation : CLSObject

{
    _Bool _isEditable;
    NSString *_locationName;
    NSString *_searchText;
    long long _sourceType;
}

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) long long sourceType;
@property _Bool isEditable;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;

@end
