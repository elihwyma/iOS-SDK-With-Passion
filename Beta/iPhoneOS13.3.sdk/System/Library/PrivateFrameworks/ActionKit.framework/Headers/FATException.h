/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSException.h>

#import <ActionKit/Swift-Protocol.h>

@interface FATException : NSException <Swift>

+ (void)initialize;
+ (id)structName;
+ (id)structFields;

- (id)init;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end
