/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse

{
    NSNumber *_errorCode;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)initWithData:(id)arg1;

@end
