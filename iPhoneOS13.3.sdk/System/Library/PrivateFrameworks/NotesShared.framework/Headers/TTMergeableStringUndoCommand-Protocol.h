//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTMergeableStringIDTracker-Protocol.h>

@class TTMergeableStringUndoGroup, TTMergeableUndoString;

@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>
- (BOOL)addToGroup:(TTMergeableStringUndoGroup *)arg1;
- (void)applyToString:(TTMergeableUndoString *)arg1;
@end

