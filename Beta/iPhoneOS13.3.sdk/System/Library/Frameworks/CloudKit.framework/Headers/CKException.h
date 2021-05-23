/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSException.h>

@interface CKException : NSException

- (id)error;
- (int)errorCode;
- (id)initWithName:(id)arg1 format:(id)arg2;
- (id)initWithCode:(int)arg1 format:(id)arg2;
- (id)initWithCode:(int)arg1 format:(id)arg2 args:(char *)arg3;
- (id)initWithName:(id)arg1 format:(id)arg2 args:(char *)arg3;

@end
