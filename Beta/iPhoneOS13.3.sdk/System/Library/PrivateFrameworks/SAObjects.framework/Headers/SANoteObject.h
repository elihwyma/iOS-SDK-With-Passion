/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SANoteObject : SADomainObject

@property (copy, nonatomic) NSString *contents;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) _Bool restricted;
@property (copy, nonatomic) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
