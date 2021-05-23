/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class ECEmailAddress, NSString;

@protocol ECEmailAddressConvertible <Swift>

@property (nonatomic, readonly) ECEmailAddress *emailAddressValue;
@property (nonatomic, readonly) NSString *stringValue;

@end
