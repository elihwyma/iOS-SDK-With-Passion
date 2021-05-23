/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceStatementsResponse : PKAccountWebServiceResponse

{
    NSArray *_statements;
}

@property (copy, nonatomic, readonly) NSArray *statements;

- (id)initWithData:(id)arg1;

@end
