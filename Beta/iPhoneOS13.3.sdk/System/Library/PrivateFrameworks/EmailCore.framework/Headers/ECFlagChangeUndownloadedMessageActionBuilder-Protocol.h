/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class ECMessageFlagChange, NSString;

@protocol ECFlagChangeUndownloadedMessageActionBuilder <Swift>

@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;

@end
