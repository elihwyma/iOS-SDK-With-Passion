/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHMemory;

@interface PXExistingMemoriesDebugCollectionItem : NSObject

{
    NSString *_name;
    NSString *_description;
    PHMemory *_memory;
}

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) PHMemory *memory;

- (id)initWithMemory:(id)arg1;

@end
