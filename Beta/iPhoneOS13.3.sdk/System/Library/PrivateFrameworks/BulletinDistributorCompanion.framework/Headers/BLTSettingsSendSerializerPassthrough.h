/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@protocol BLTSettingsSendSerializerDelegate;

@interface BLTSettingsSendSerializerPassthrough : NSObject

{
    id <BLTSettingsSendSerializerDelegate> _delegate;
}

@property (weak, nonatomic) id <BLTSettingsSendSerializerDelegate> delegate;

- (void)handleFileURL:(id)arg1;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7 spoolToFile:(_Bool)arg8;
- (void)sendNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2 withTimeout:(id)arg3;

@end
