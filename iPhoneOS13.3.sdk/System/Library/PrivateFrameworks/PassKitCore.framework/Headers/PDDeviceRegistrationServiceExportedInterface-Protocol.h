//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString;

@protocol PDDeviceRegistrationServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)performDeviceRegistrationForReason:(NSString *)arg1 actionType:(long long)arg2 completion:(void (^)(NSUInteger))arg3;
@end

