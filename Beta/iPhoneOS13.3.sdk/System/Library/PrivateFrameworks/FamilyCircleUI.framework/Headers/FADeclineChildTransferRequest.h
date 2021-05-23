/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest

{
    NSString *_requestCode;
}

@property (copy, nonatomic) NSString *requestCode;

- (_Bool)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end
