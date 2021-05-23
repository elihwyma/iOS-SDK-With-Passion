/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ODDLayoutNode;

__attribute__((visibility("hidden")))
@interface ODDLayout : NSObject

{
    ODDLayoutNode *mRootNode;
}

- (id)init;
- (id)description;
- (id)rootNode;

@end
