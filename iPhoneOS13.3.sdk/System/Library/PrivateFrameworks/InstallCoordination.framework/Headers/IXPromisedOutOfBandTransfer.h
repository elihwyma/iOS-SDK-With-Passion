//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXOpaqueDataPromise.h>


@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(NSUInteger)arg2 diskSpaceNeeded:(NSUInteger)arg3;

@end

