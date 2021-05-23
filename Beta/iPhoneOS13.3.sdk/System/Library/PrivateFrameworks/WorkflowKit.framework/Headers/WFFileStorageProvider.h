/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFFileStorageProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedProvider;

- (id)recordWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (_Bool)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (_Bool)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (id)fileWithDescriptor:(id)arg1 error:(id *)arg2;

@end
