/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSSet;

@protocol ECIMAPServerMessageBuilder <Swift>

@property (nonatomic) unsigned int imapUID;
@property (copy, nonatomic) NSSet *labels;

@end
