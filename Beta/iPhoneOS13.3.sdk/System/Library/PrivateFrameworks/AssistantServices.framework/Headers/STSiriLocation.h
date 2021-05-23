/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface STSiriLocation : NSObject

{
    NSURL *_addressBookID;
    NSString *_addressLabel;
    NSString *_contactName;
    NSData *_geoResult;
    long long _resultType;
}

@property (copy, nonatomic) NSURL *addressBookID;
@property (copy, nonatomic) NSString *addressLabel;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSData *geoResult;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
