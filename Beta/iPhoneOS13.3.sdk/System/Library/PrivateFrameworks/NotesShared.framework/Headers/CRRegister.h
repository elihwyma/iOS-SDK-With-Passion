/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDocument, NSString;

@interface CRRegister : NSObject <Swift>

{
    CRDocument *_document;
}

@property (retain, nonatomic) id contents;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2;
+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3;

- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (_Bool)isEqualContents:(id)arg1;

@end
