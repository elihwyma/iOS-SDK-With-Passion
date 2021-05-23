/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSOperation.h>

@interface SCNExportOperation : NSOperation

- (id)error;
- (double)progress;
- (_Bool)canceled;
- (_Bool)succeded;

@end
