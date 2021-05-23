/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXPresentableContact : NSObject

{
    NSString *_email;
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *phoneNumber;

- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithEmail:(id)arg1;

@end
