/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ASTAction : NSObject

{
    _Bool _finished;
    _Bool _generatedId;
    unsigned long long _progress;
    NSString *_action;
    NSString *_identifier;
    NSDictionary *_parameters;
    long long _resultCode;
    NSDictionary *_results;
}

@property (nonatomic) _Bool generatedId;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic, getter=isFinished) _Bool finished;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 data:(id)arg2;
- (id)acceptableDecoderClasses;

@end
