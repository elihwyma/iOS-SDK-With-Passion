/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CUIKeyTestOrganizer : NSObject

{
    struct _renditionkeytoken originalKey[22];
    NSArray *orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    struct _renditionkeytoken testKey[22];
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}

- (void)dealloc;
- (unsigned long long)_attributeToBumpIndex;
- (_Bool)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken *)arg1;
- (void)_bumpTestKey;
- (id)initWithRenditionKey:(const struct _renditionkeytoken *)arg1;
- (struct _renditionkeytoken *)nextKey;

@end
