/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <Swift>

{
    vector_0ee2fe7a _selectionRanges;
    unsigned long long _selectionAffinity;
}

@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (id)serialize;
- (void)saveToArchive:(struct Selection *)arg1;
- (vector_0ee2fe7a *)selectionRanges;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (_Bool)hasTopoIDsThatCanChange;
- (id)initWithArchive:(const struct Selection *)arg1;

@end
