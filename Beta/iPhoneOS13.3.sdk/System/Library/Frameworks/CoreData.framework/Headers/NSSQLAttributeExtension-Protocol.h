/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/Swift-Protocol.h>

@class NSArray;

@protocol NSSQLAttributeExtension <Swift>

@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;

- (unsigned short)validate: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithObjectFromUserInfo:onAttributeNamed:onEntity: /* Error: Ran out of types for this method. */;
- (unsigned short)isEqualToExtension: /* Error: Ran out of types for this method. */;

@end
