/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NoteObject;

@interface NoteBodyObject : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (retain, nonatomic) NoteObject *owner;
@property (retain, nonatomic) NSData *externalRepresentation;
@property (retain, nonatomic) NSString *externalContentRef;

- (id)contentAsPlainTextPreservingNewlines;
- (id)targetSearchIndexable;

@end
