/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject

{
    NSString *_name;
    NSString *_description;
    NSDictionary *_options;
    PHMemory *_memory;
    NSString *_rejectionCause;
}

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *options;
@property (readonly) PHMemory *memory;
@property (readonly) NSString *rejectionCause;

- (id)initWithOptions:(id)arg1;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;

@end
