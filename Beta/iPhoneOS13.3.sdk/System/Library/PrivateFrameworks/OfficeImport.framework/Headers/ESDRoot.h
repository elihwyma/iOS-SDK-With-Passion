/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject

{
    NSMutableArray *mChildren;
}

- (id)init;
- (void)addChild:(id)arg1;
- (unsigned long long)childCount;
- (id)childAt:(unsigned long long)arg1;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (struct EshRoot *)eshRoot;
- (id)initFromReader:(struct OcReader *)arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (id)initWithPbState:(id)arg1;

@end
