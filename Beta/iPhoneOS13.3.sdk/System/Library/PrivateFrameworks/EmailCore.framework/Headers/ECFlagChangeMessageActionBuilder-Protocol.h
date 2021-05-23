/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class ECMessageFlagChange, NSArray, NSSet;

@protocol ECFlagChangeMessageActionBuilder <Swift>

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;

@end
