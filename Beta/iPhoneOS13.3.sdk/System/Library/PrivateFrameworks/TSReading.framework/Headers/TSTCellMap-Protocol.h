/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSTCellMap <Swift>

@property (nonatomic) _Bool appliesToHidden;

- (unsigned short)count;
- (unsigned short)addCell:andCellID: /* Error: Ran out of types for this method. */;
- (unsigned short)containsCellID: /* Error: Ran out of types for this method. */;
- (unsigned short)popLastCell;
- (unsigned short)cellIDs;
- (unsigned short)cellIDAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)cellAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)mayModifyFormulasInCells;
- (unsigned short)mayModifyValuesReferencedByFormulas;
- (unsigned short)setMayModifyValuesReferencedByFormulas: /* Error: Ran out of types for this method. */;

@end
