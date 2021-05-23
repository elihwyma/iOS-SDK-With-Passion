/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CNContactImageManagedObject : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *variant;

+ (CDUnknownBlockType)managedObjectToContactImageTransform;

- (id)cropRectStringFromCGRect:(struct CGRect)arg1;
- (void)updateWithContactImage:(id)arg1;
- (void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2;

@end
