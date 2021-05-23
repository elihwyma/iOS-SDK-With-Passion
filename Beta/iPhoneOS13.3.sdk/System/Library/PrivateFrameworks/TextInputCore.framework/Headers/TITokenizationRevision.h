/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TITokenizationRevision : NSObject

{
    unsigned long long _revisedDocumentLocation;
    unsigned long long _branchedTokenIndex;
    unsigned long long _mergedTokenIndex;
    NSMutableArray *_branchTokens;
    struct _NSRange _originalSelectedTokenRange;
    struct _TIRevisionHistoryTokenIterator _originalIterator;
}

@property (nonatomic) struct _NSRange originalSelectedTokenRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator originalIterator;
@property (nonatomic) unsigned long long revisedDocumentLocation;
@property (nonatomic) unsigned long long branchedTokenIndex;
@property (nonatomic) unsigned long long mergedTokenIndex;
@property (nonatomic, readonly) NSMutableArray *branchTokens;

- (id)init;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;

@end
