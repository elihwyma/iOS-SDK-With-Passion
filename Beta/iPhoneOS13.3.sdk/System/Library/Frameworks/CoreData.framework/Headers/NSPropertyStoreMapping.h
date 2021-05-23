/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSStoreMapping.h>

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSPropertyStoreMapping : NSStoreMapping

{
    NSPropertyDescription *_property;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1;
- (id)property;
- (void)setProperty:(id)arg1;

@end
