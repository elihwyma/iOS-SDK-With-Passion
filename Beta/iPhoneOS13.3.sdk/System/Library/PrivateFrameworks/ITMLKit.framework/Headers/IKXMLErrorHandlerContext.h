/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSMutableString, NSString;

@interface IKXMLErrorHandlerContext : NSObject

{
    NSMutableString *_mutableErrorMessages;
    NSMutableSet *_mutableParserErrors;
}

@property (retain, nonatomic) NSMutableString *mutableErrorMessages;
@property (retain, nonatomic) NSMutableSet *mutableParserErrors;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSArray *parserErrors;

- (id)init;
- (void)clear;

@end
