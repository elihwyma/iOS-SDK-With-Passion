/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@interface ICFlowControlBasic : NSObject

{
    CDUnknownBlockType shouldBeCanceled;
    CDUnknownBlockType reportProgress;
}

@property (copy, nonatomic) CDUnknownBlockType shouldBeCanceled;
@property (copy, nonatomic) CDUnknownBlockType reportProgress;

- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (id)initWithCancel:(CDUnknownBlockType)arg1;
- (id)initWithProgress:(CDUnknownBlockType)arg1;

@end
