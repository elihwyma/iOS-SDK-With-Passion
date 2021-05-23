/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPropertyStoreMapping.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping : NSPropertyStoreMapping

{
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)relationship;
- (id)columnDefinitions;
- (id)constraintDefinitions;
- (void)setDestinationEntityExternalName:(id)arg1;
- (void)setForeignKeys:(id)arg1;
- (void)setJoins:(id)arg1;
- (id)destinationEntityExternalName;
- (id)foreignKeys;
- (id)joins;
- (unsigned int)joinSemantic;
- (void)setJoinSemantic:(unsigned int)arg1;

@end
