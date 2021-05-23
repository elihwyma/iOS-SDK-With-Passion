/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHEntityKeyMap : NSObject

{
    struct NSDictionary *_propertyKeysByEntityKey;
    struct NSDictionary *_entityKeysByPropertyKey;
}

+ (struct NSDictionary *)transposePropertyKeysByEntityKey:(struct NSDictionary *)arg1;
+ (void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(struct NSDictionary *)arg3;

- (id)initWithPropertyKeysByEntityKey:(struct NSDictionary *)arg1;
- (id)entityKeyForPropertyKey:(id)arg1;
- (id)propertyKeyForEntityKey:(id)arg1;

@end
