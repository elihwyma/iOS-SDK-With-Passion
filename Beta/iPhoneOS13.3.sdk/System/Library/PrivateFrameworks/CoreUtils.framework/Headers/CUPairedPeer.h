/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface CUPairedPeer : NSObject

{
    NSDictionary *_acl;
    NSData *_altIRK;
    NSUUID *_identifier;
    NSDictionary *_info;
    NSString *_label;
    NSString *_model;
    NSString *_name;
    NSData *_publicKey;
    NSDate *_dateModified;
    NSString *_identifierStr;
}

@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSString *identifierStr;
@property (copy, nonatomic) NSDictionary *acl;
@property (copy, nonatomic) NSData *altIRK;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *publicKey;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)detailedDescription;

@end
