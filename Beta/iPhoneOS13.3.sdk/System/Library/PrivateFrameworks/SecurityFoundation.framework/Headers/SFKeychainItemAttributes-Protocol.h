/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@protocol SFKeychainItemAttributes <Swift>

@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSString *persistentIdentifier;

@end
