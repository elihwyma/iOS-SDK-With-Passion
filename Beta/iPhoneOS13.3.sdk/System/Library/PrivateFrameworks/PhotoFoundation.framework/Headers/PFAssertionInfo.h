/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PFAssertionInfo : NSObject

{
    _Bool _isClassMethod;
    _Bool _isFatal;
    SEL _selector;
    Class _objectClass;
    NSString *_functionName;
    NSString *_fileName;
    unsigned long long _lineNumber;
    NSString *_message;
    NSArray *_backtrace;
}

@property SEL selector;
@property (retain) Class objectClass;
@property _Bool isClassMethod;
@property (retain) NSString *functionName;
@property (retain) NSString *fileName;
@property unsigned long long lineNumber;
@property (retain) NSString *message;
@property (retain) NSArray *backtrace;
@property _Bool isFatal;

- (id)description;
- (id)prettyMethodName;
- (_Bool)isWarning;

@end
