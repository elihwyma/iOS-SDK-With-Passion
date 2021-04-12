//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOReplaceOperation.h>

#import <iWorkImport/TSKCORangeOperation-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation>
{
    vector_b5e32e34 _rangeVector;
    BOOL _preserveLowerPriorityLocation;
    NSUInteger _insertLength;
}

@property(readonly, nonatomic) BOOL preserveLowerPriorityLocation; // @synthesize preserveLowerPriorityLocation=_preserveLowerPriorityLocation;
@property(readonly, nonatomic) NSUInteger insertLength; // @synthesize insertLength=_insertLength;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct Operation )arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation )arg2;
- (shared_ptr_f167ad79)newTransformableOperation;
- (id)toString;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) const vector_b5e32e34 rangeVector;
- (id)operationWithNewNoop:(BOOL)arg1;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 rangeVector:(const vector_b5e32e34 )arg2 insertLength:(NSUInteger)arg3;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 rangeVector:(const vector_b5e32e34 )arg2 insertLength:(NSUInteger)arg3 noop:(BOOL)arg4;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 rangeVector:(const vector_b5e32e34 )arg2 insertLength:(NSUInteger)arg3 preserveLowerPriorityLocation:(BOOL)arg4 noop:(BOOL)arg5;

@end

