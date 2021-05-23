/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLStoreMappingGenerator : NSObject

{
    NSMutableDictionary *_names;
}

+ (void)invalidate;
+ (id)defaultMappingGenerator;

- (id)init;
- (void)dealloc;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)uniqueNameWithBase:(id)arg1;
- (id)generateTableName:(id)arg1 isAncillary:(_Bool)arg2;
- (id)newUniqueNameWithBase:(unsigned short *)arg1 withLength:(unsigned long long)arg2;

@end
