/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface ASTErrorStatus : NSObject

{
    NSNumber *_code;
    NSString *_reason;
    NSMutableDictionary *_data;
}

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSMutableDictionary *data;

+ (id)errorStatusWithCode:(long long)arg1;

- (id)init;
- (id)dictionary;
- (id)reasonForCode:(id)arg1;

@end
