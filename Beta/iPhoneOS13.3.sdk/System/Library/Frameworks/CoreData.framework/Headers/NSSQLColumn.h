/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLProperty.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLColumn : NSSQLProperty

{
    NSString *_columnName;
}

- (void)dealloc;
- (id)description;
- (id)columnName;
- (unsigned char)sqlType;
- (unsigned int)slot;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setSQLType:(unsigned char)arg1;
- (id)initForReadOnlyFetching;
- (void)setAllowAliasing:(_Bool)arg1;
- (void)_setColumnName:(id)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (_Bool)allowAliasing;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2;
- (unsigned int)roughSizeEstimate;
- (unsigned int)fetchIndex;
- (void)_setFetchIndex:(unsigned int)arg1;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (id)cloneForReadOnlyFetching;

@end
