/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMUnitTestRunner, NSFileHandle, NSString;

@interface CKUnitTestRunner : NSObject

{
    _Bool _shouldWrite;
    IMUnitTestRunner *_runner;
    NSFileHandle *_fileHandle;
}

@property (retain, nonatomic) IMUnitTestRunner *runner;
@property (nonatomic) _Bool shouldWrite;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;
- (void)_dumpResults:(id)arg1;
- (void)runUnitTestBundleAtPath:(id)arg1 writeToFile:(_Bool)arg2;

@end
