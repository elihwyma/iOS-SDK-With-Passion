/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/TTVersionedDocument.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument <Swift>

{
    TTMergeableAttributedString *_mergeableString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TTMergeableAttributedString *mergeableString;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (id)clockElementListForReplicaUUID:(id)arg1;
- (id)initWithMergeableString:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (_Bool)rem_isEqual:(id)arg1;
- (id)rem_copyWithReplicaIDForNewEdits:(id)arg1;
- (unsigned long long)mergeWithStringVersionedDocument:(id)arg1;
- (id)initWithArchive:(const Document_22a49c75 *)arg1 andReplicaID:(id)arg2;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;

@end
