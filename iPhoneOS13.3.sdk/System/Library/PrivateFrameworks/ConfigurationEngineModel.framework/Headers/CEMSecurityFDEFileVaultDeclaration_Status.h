//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMSecurityFDEFileVaultDeclaration_Status : CEMPayloadBase
{
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

