/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString;

@interface ICNoteAllAccountVisibilityTesting : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;

@end
