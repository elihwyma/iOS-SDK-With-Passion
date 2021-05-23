/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface IDSCTPNRResponseData : NSObject

{
    _Bool _success;
    NSString *_phoneNumber;
    NSString *_phoneBookNumber;
    NSData *_signature;
    NSString *_status;
}

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *phoneBookNumber;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCTResponse:(id)arg1 phoneBookNumber:(id)arg2;

@end
