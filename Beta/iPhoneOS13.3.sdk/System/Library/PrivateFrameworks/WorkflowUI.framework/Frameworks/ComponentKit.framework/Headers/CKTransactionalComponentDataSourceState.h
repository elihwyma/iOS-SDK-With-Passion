/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceConfiguration, NSArray;

@interface CKTransactionalComponentDataSourceState : NSObject

{
    CKTransactionalComponentDataSourceConfiguration *_configuration;
    NSArray *_sections;
}

@property (copy, nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) CKTransactionalComponentDataSourceConfiguration *configuration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(id)arg1;
- (long long)numberOfObjectsInSection:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 sections:(id)arg2;
- (void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
