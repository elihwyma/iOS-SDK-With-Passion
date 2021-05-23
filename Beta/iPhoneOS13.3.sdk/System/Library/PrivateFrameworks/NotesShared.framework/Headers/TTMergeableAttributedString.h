/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTMergeableUndoString.h>

@class NSString;

@interface TTMergeableAttributedString : TTMergeableUndoString

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)writingDirectionForAttribute:(int)arg1;
+ (int)attributeForWritingDirection:(long long)arg1;
+ (id)attributesForRun:(const struct AttributeRun *)arg1;
+ (void)saveAttributesOfString:(id)arg1 toArchive:(struct String *)arg2;
+ (void)saveAttributes:(id)arg1 toArchive:(struct AttributeRun *)arg2;
+ (id)whitelistedTypingAttributes;
+ (id)whitelistedAttributesForModel;
+ (id)whitelistedAttributesForStyle;

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)serialize;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 string:(struct String *)arg2;
- (void)saveToArchive:(struct String *)arg1;
- (id)initWithCRCoder:(id)arg1 string:(const struct String *)arg2;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3 timestamp:(id)arg4;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (void)setAttributes:(id)arg1 substring:(struct TopoSubstring *)arg2;
- (_Bool)attributesEqual:(id)arg1 toRange:(struct _NSRange)arg2 modelEqual:(_Bool *)arg3;
- (_Bool)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(_Bool *)arg3;

@end
