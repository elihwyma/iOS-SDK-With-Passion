/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <Swift>

{
    CRSet *_set;
    NSMapTable *_timestamps;
}

@property (retain, nonatomic) NSMapTable *timestamps;
@property (retain, nonatomic) CRSet *set;
@property (retain, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)tombstone;
- (void)addItem:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)timestampForNewItem;

@end
