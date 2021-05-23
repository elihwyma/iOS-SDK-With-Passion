/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathRowExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableCellExpression : SCRCMathRowExpression

{
    _Bool _didGetTablePosition;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _tableRowCount;
    unsigned long long _tableColumnCount;
}

- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)mathMLTag;
- (void)_getTableDataIfNecessary;
- (id)_prefixForCell;
- (id)_suffixForCell;

@end
