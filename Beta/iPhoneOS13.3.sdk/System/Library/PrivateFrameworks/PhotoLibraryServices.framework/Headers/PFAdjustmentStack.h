/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <Swift>

{
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    unsigned long long _formatVersion;
}

+ (_Bool)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithAdjustments:(id)arg1;
- (id)adjustmentAtIndex:(unsigned long long)arg1;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)maskUUIDs;
- (id)initWithEnvelopeDictionary:(id)arg1;
- (id)envelopeDictionary;

@end
