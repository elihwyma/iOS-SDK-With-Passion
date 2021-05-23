/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ASTResponse : NSObject

{
    long long _command;
    NSDictionary *_data;
    NSNumber *_progress;
    NSNumber *_testId;
    NSDictionary *_stringToCommand;
    NSString *_commandString;
}

@property (retain, nonatomic) NSDictionary *stringToCommand;
@property (retain, nonatomic) NSString *commandString;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSNumber *progress;
@property (nonatomic, readonly) NSNumber *testId;

+ (id)stringFromCommand:(long long)arg1;
+ (id)responseWithDictionary:(id)arg1;
+ (id)_stringToCommand;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)validateResponse:(id)arg1 key:(id)arg2 expectedClass:(Class)arg3;
- (id)validateData:(id)arg1 command:(long long)arg2;
- (_Bool)validateTestId:(id)arg1 command:(long long)arg2;

@end
