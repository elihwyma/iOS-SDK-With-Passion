/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PawuKFL8icsLHMZd : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    unsigned long long _source;
    unsigned long long _type;
}

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;

- (id)initWithSource:(unsigned long long)arg1;
- (id)initWithFullName:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 source:(unsigned long long)arg3;
- (id)initWithEmailAddress:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithPhoneNumber:(id)arg1 source:(unsigned long long)arg2;

@end
