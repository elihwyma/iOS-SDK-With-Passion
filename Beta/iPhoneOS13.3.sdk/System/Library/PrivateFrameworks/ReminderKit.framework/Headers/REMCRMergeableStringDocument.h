/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSAttributedString, NSString, REMReplicaIDSource, TTMergeableStringVersionedDocument;

@interface REMCRMergeableStringDocument : NSObject <Swift>

{
    REMReplicaIDSource *_replicaIDSource;
    TTMergeableStringVersionedDocument *_document;
}

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSAttributedString *attributedString;

+ (_Bool)supportsSecureCoding;
+ (id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedData;
- (id)initWithReplicaIDSource:(id)arg1 string:(id)arg2;
- (id)mutableDocument;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id *)arg3;
- (id)mergedWithDocument:(id)arg1 error:(id *)arg2;

@end
