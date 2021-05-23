/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPropertyStoreMapping.h>

__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping

{
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (_Bool)isEqual:(id)arg1;
- (id)attribute;
- (id)sqlType;
- (id)initWithProperty:(id)arg1;
- (void)setExternalType:(int)arg1;
- (void)setExternalPrecision:(unsigned int)arg1;
- (void)setExternalScale:(int)arg1;
- (int)externalType;
- (unsigned int)externalPrecision;
- (int)externalScale;
- (id)columnDefinition;

@end
