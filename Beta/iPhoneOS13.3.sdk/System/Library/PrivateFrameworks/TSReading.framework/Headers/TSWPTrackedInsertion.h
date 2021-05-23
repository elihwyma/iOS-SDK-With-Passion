/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSWPChangeSession, TSWPSelection;

@interface TSWPTrackedInsertion : NSObject

{
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)delta;
- (struct _NSRange)insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 replaceBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)targetCharIndex;
- (id)initWithSelection:(id)arg1 string:(id)arg2 changeSession:(id)arg3;

@end
