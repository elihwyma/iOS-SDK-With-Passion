/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPCTTypesetterCache, TSWPStorage;

@protocol TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject

{
    id <TSWPLayoutOwner> _owner;
    TSWPStorage *_storage;
    _Bool _isObservingStorage;
    _Bool _useLigatures;
    long long _delta;
    struct _NSRange _dirtyRange;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
}

@property (nonatomic, readonly) id <TSWPLayoutOwner> owner;
@property (retain, nonatomic, readonly) TSWPStorage *storage;
@property (nonatomic, readonly) struct _NSRange dirtyRange;
@property (retain, nonatomic, readonly) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(_Bool)arg7 styleProvider:(id)arg8 vertical:(_Bool)arg9;

- (void)dealloc;
- (id).cxx_construct;
- (id)styleProvider;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;
- (void)resetTopicNumbers;
- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(_Bool *)arg3;
- (void)destroyLayoutState:(void *)arg1;
- (void)clearOwner;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
- (void)clearTypesetterCache;
- (void)willRemoveAttachmentLayout:(id)arg1;
- (_Bool)needsLayoutInColumn:(id)arg1;
- (double)layoutIntoTarget:(id)arg1 withRange:(struct _NSRange)arg2;
- (void *)layoutStateForLayoutTarget:(id)arg1 afterHint:(const CDStruct_6026ced1 *)arg2 childHint:(id)arg3 topicNumbers:(const struct TSWPTopicNumberHints *)arg4 textIsVertical:(_Bool)arg5;
- (void)deflateTarget:(id)arg1 intoHints:(vector_2f7f6b92 *)arg2 childHints:(id [2])arg3 anchoredAttachmentPositions:(id *)arg4 topicNumbers:(struct TSWPTopicNumberHints *)arg5 layoutState:(void *)arg6;
- (void)inflateTarget:(id)arg1 fromHints:(const vector_2f7f6b92 *)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;

@end
