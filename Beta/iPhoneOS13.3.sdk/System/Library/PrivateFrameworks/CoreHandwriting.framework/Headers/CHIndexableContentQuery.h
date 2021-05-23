/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery

{
    CHRecognitionSessionIndexableContent *_indexableContent;
}

@property (retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent;

- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;

@end
