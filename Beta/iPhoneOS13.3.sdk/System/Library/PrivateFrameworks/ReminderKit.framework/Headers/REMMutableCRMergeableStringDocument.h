/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMReplicaIDHelper, REMReplicaIDSource, TTMergeableAttributedString, TTMergeableStringVersionedDocument;

@protocol REMReplicaManagerProviding;

@interface REMMutableCRMergeableStringDocument : NSObject

{
    id <REMReplicaManagerProviding> _replicaManagerProvider;
    REMReplicaIDSource *_replicaIDSource;
    TTMergeableStringVersionedDocument *_document;
    REMReplicaIDHelper *_replicaIDHelper;
}

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper;
@property (retain, nonatomic) id <REMReplicaManagerProviding> replicaManagerProvider;
@property (nonatomic, readonly) TTMergeableAttributedString *mergeableString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithReplicaIDSource:(id)arg1;
- (id)wipeAndReplaceWithString:(id)arg1;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2;
- (id)immutableDocument;
- (void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2;

@end
