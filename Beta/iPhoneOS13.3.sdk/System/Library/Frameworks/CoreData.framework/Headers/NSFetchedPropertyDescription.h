/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPropertyDescription.h>

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription

{
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}

@property (retain) NSFetchRequest *fetchRequest;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)isTransient;
- (unsigned long long)_propertyType;
- (_Bool)isReadOnly;
- (void)_createCachesAndOptimizeState;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)setTransient:(_Bool)arg1;

@end
