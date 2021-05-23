/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/Swift-Protocol.h>

@class NSOrderedSet, NSPredicate;

@protocol _UIDocumentPickerDirectoryObserver <Swift>

@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (nonatomic, readonly) _Bool afterInitialUpdate;
@property (retain, nonatomic) NSPredicate *queryPredicate;

@end
