/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter

{
    NSString *_recordKey;
    unsigned long long _type;
    NSString *_value;
}

@property (retain, nonatomic) NSString *recordKey;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *value;

- (id)stringRepresentationWithRecordType:(id)arg1;

@end
