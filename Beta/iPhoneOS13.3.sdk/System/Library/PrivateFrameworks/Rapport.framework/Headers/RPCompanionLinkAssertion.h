/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject

{
    NSString *_assertionID;
    RPCompanionLinkClient *_client;
    NSString *_destinationID;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *assertionID;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
