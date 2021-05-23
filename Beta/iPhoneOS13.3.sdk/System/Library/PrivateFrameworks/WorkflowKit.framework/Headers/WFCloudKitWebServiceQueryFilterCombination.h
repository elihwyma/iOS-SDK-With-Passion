/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter

{
    NSArray *_filters;
    unsigned long long _type;
}

@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) unsigned long long type;

- (id)stringRepresentationWithRecordType:(id)arg1;

@end
