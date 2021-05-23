/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class ASTErrorStatus, NSDictionary, NSNumber;

@interface ASTRequest : ASTSealablePayload

{
    long long _clientStatus;
    ASTErrorStatus *_error;
    NSDictionary *_data;
    NSNumber *_currentTest;
    NSNumber *_progress;
}

@property (nonatomic) long long clientStatus;
@property (retain, nonatomic) ASTErrorStatus *error;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *currentTest;
@property (retain, nonatomic) NSNumber *progress;

+ (id)request;
+ (id)stringFromClientStatus:(long long)arg1;

- (id)init;
- (id)description;
- (id)generatePayload;

@end
