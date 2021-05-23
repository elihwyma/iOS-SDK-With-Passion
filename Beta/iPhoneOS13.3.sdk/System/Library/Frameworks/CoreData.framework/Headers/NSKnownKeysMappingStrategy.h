/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@interface NSKnownKeysMappingStrategy : NSObject

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) id *keys;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;

@end
