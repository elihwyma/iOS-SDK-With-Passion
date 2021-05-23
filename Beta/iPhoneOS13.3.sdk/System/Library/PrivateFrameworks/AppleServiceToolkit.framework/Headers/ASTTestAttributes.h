/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ASTTestAttributes : NSObject

{
    NSNumber *_testId;
    NSString *_version;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (retain, nonatomic) NSNumber *testId;
@property (retain, nonatomic) NSString *version;

+ (id)attributesWithTestId:(id)arg1 version:(id)arg2;

- (id)init;
- (id)description;
- (id)initWithTestId:(id)arg1 version:(id)arg2;

@end
