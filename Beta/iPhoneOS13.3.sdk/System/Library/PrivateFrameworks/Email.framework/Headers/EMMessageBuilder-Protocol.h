/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class NSArray, NSUUID;

@protocol ECEmailAddressConvertible;

@protocol EMMessageBuilder <Swift>

@property (retain, nonatomic) id <ECEmailAddressConvertible> senderAddress;
@property (copy, nonatomic) NSArray *bccList;
@property (copy, nonatomic) NSUUID *documentID;

@end
