/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BRTask : NSObject

{
    NSArray *_argv;
    NSString *_redirectStdoutToFileAtPath;
    int _redirectStdoutToFileDescriptor;
    NSString *_redirectStderrToFileAtPath;
    int _redirectStderrToFileDescriptor;
    int _waitStatus;
}

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSString *redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (retain, nonatomic) NSString *redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (nonatomic, readonly) int waitStatus;

+ (id)taskWithCommandWithArguments:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
+ (id)sanitizeStringForFilename:(id)arg1;

- (id)init;
- (void)setCommandWithArguments:(id)arg1;
- (void)setCommand:(id)arg1;
- (int)exec;
- (void)resetRedirect;

@end
