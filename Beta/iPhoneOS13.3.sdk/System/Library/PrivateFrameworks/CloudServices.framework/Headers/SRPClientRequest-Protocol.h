/*
 Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

#import <CloudServices/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol SRPClientRequest <Swift>

@property (copy, nonatomic, readonly) NSString *dsid;
@property (copy, nonatomic, readonly) NSString *recordLabel;
@property (copy, nonatomic, readonly) NSString *recoveryPassphrase;
@property (retain, nonatomic, readonly) NSDictionary *escrowRecord;
@property (copy, nonatomic, readonly) NSString *recordID;

- (unsigned short)validateInput;

@end
