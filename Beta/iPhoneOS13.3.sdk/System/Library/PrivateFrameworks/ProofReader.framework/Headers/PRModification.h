/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@interface PRModification : NSObject

- (struct _NSRange)range;
- (id)replacementString;
- (unsigned long long)modificationType;
- (struct _NSRange)syllableRange;
- (double)modificationScore;
- (struct _NSRange)additionalSyllableRange;

@end
