/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

#import <vCard/Swift-Protocol.h>

@class NSString;

@interface CNVCardNameComponents : NSObject <Swift>

{
    NSString *_formattedName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_title;
    NSString *_suffix;
    NSString *_companyName;
    _Bool _isCompany;
}

@property (copy, readonly) NSString *formattedName;
@property (readonly) _Bool isCompany;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *title;
@property (readonly) NSString *suffix;
@property (readonly) NSString *companyName;

+ (id)components;
+ (id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(_Bool)arg7;

@end
