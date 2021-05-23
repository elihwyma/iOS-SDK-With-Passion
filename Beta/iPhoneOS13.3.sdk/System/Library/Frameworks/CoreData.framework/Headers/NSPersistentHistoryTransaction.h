/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSPersistentHistoryToken, NSString;

@interface NSPersistentHistoryTransaction : NSObject

@property (copy, readonly) NSDate *timestamp;
@property (copy, readonly) NSArray *changes;
@property (readonly) long long transactionNumber;
@property (copy, readonly) NSString *storeID;
@property (copy, readonly) NSString *bundleID;
@property (copy, readonly) NSString *processID;
@property (copy, readonly) NSString *contextName;
@property (copy, readonly) NSString *author;
@property (readonly) NSPersistentHistoryToken *token;

+ (_Bool)supportsSecureCoding;
+ (id)fetchRequest;
+ (id)entityDescription;
+ (id)entityDescriptionWithContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialQueryGenerationToken;
- (id)postQueryGenerationToken;
- (id)objectIDNotification;

@end
