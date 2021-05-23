/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@interface NSQueryGenerationToken : NSObject

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)currentQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;
+ (id)nostoresQueryGenerationToken;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isEnabled;
- (id)persistentStoreCoordinator;
- (id)_generationalComponentForStore:(id)arg1;
- (id)_storeIdentifier;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id *)arg2;
- (_Bool)_isUnmoored;

@end
