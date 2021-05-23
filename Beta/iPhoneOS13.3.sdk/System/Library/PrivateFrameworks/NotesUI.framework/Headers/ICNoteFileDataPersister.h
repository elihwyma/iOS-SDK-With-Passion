/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface ICNoteFileDataPersister : NSObject

{
    NSURL *_baseURL;
}

@property (retain, nonatomic) NSURL *baseURL;

- (id)init;
- (id)urlForIdentifier:(id)arg1;
- (id)loadDataForIdentifier:(id)arg1;
- (_Bool)saveData:(id)arg1 identifier:(id)arg2;
- (id)initWithNotePackageURL:(id)arg1;

@end
