/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNGroup.h>

@class NSData, NSDate, NSString;

@interface CNMutableGroup : CNGroup

@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalUUID;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) CNGroup *snapshot;
@property (copy, nonatomic) NSString *name;

- (id)copy;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;

@end
