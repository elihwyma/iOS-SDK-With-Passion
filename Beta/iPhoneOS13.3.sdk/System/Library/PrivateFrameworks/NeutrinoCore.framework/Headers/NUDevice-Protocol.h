/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString;

@protocol NUDevice <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly) _Bool hasMetalSupport;
@property (nonatomic, readonly) _Bool hasOpenGLSupport;
@property (nonatomic, readonly) long long openGLVirtualScreen;
@property (nonatomic, readonly) long long defaultSampleMode;

- (unsigned short)renderer: /* Error: Ran out of types for this method. */;
- (unsigned short)lowPriorityRenderer: /* Error: Ran out of types for this method. */;

@end
