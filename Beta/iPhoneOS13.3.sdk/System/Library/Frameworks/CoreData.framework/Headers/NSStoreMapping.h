/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapping : NSObject

{
    NSString *_externalName;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)externalName;
- (id)initWithExternalName:(id)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setExternalName:(id)arg1;

@end
