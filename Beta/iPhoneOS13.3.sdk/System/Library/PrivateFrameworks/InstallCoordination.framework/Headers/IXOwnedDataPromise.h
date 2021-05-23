/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXOwnedDataPromiseSeed, NSURL;

@interface IXOwnedDataPromise : IXDataPromise <Swift>

{
    NSURL *_stagedPath;
}

@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSURL *stagedPath;
@property (nonatomic, readonly) NSURL *stagingBaseDir;

- (Class)seedClass;

@end
