/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class NSIndexPath;

@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;

@protocol MiroEditorClipCollection <Swift>

@property (weak, nonatomic) id <MiroEditorClipCollectionDataSource> dataSource;
@property (weak, nonatomic) id <MiroEditorClipCollectionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;

- (unsigned short)snapToIndexPath:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)cellForClipProvider: /* Error: Ran out of types for this method. */;

@end
