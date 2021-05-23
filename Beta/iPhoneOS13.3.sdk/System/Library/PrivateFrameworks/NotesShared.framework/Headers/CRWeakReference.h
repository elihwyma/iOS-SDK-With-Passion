/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDocument, NSString, NSUUID;

@interface CRWeakReference : NSObject <Swift>

{
    NSUUID *_identifier;
    CRDocument *_document;
}

@property (weak, nonatomic) CRDocument *document;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic, readonly) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tombstone;
- (id)initWithContents:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithIdentifier:(id)arg1 document:(id)arg2;

@end
