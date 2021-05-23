/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecord, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKRecordGraphNode : NSObject

{
    NSMutableSet *_edges;
    NSMutableSet *_indegrees;
    CKRecord *_record;
}

@property (retain, nonatomic) NSMutableSet *edges;
@property (nonatomic, readonly) NSMutableSet *indegrees;
@property (nonatomic, readonly) unsigned long long indegree;
@property (retain, nonatomic) CKRecord *record;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)CKPropertiesDescription;

@end
