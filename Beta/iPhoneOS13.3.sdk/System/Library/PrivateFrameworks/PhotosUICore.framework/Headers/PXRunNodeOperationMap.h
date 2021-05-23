/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject

{
    NSMapTable *_operationMap;
}

- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)operationForRunNode:(id)arg1;

@end
