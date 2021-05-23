/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@interface PRAutocorrectionContext : NSObject

{
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)arg1;

- (void)reset;
- (id)completions;
- (id)correction;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;
- (id)prefixes;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (id)guesses;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;
- (void)setModificationMask:(unsigned long long)arg1;
- (unsigned long long)modificationMask;
- (double)validSequenceCorrectionThreshold;

@end
