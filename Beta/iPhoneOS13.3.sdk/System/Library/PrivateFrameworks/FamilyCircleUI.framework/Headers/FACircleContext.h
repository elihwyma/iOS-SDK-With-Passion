/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

#import <FamilyCircleUI/Swift-Protocol.h>

@class AKAppleIDAuthenticationContext, NSData, NSDictionary, NSString, NSURL;

@interface FACircleContext : NSObject <Swift>

{
    NSString *_eventType;
    NSString *_clientName;
    NSString *_clientBundleID;
    NSDictionary *_additionalParameters;
    NSURL *_urlForContext;
    AKAppleIDAuthenticationContext *_authContext;
}

@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (copy, nonatomic) NSURL *urlForContext;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (copy, nonatomic, readonly) NSString *eventType;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSDictionary *additionalParameters;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithData:(id)arg1;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1;

@end
