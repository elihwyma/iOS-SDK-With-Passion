/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXTangierDragItemProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)session:(id)arg1 containsURL:(id)arg2;
- (id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3;

@end
