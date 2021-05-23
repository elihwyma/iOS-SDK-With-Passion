/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSUUID.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString;

@interface NSUUID (NSUUIDAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)TTZero;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_zero;
+ (id)CR_UUIDFromStdString:(const basic_string_7c0a1c0b *)arg1;

- (id)tombstone;
- (void)setDocument:(id)arg1;
- (long long)CR_compare:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)CR_shortDescription;
- (basic_string_7c0a1c0b)CR_toStdString;

@end
