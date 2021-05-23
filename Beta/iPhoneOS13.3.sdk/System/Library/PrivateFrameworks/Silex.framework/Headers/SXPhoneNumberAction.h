/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXPhoneNumberAction : NSObject <Swift>

{
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;

- (id)initWithPhoneNumber:(id)arg1;

@end
