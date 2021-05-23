/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICNote, NSArray, NSManagedObjectContext, NSString, TTTextStorage;

@interface TTTextStorageWithRange : NSObject

{
    ICNote *_note;
    NSManagedObjectContext *_workerContext;
    ICNote *_workerContextNote;
    TTTextStorage *_textStorage;
    struct _NSRange _range;
}

@property (retain, nonatomic) ICNote *note;
@property (nonatomic) struct _NSRange range;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (retain, nonatomic) ICNote *workerContextNote;
@property (retain, nonatomic) TTTextStorage *textStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2 note:(id)arg3;
- (void)prepareTextStorage;

@end
