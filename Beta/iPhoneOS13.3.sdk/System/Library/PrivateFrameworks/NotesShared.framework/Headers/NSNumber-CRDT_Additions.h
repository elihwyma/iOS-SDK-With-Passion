/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSNumber.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString;

@interface NSNumber (CRDT_Additions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;

@end
