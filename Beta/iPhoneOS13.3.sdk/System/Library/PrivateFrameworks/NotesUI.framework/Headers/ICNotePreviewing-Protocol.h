/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@class ICSearchResult;

@protocol ICSearchIndexableNote;

@protocol ICNotePreviewing <Swift>

@property (nonatomic, readonly) id <ICSearchIndexableNote> note;
@property (nonatomic, readonly) ICSearchResult *searchResult;

- (unsigned short)setupPreview;
- (unsigned short)initWithNote: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithNote:searchResult: /* Error: Ran out of types for this method. */;
- (unsigned short)setupPreviewWithInitialFrame: /* Error: Ran out of types for this method. */;

@end
