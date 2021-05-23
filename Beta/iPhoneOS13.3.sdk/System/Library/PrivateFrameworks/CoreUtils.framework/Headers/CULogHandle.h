/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@interface CULogHandle : NSObject

{
    NSString *_categoryName;
    struct LogCategory *_ucatPtr;
    NSString *_label;
}

@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 logFlags:(unsigned int)arg4;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logFlags:(unsigned int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (void)ulog:(int)arg1 message:(id)arg2;
- (void)ulogf:(int)arg1 format:(id)arg2;
- (void)ulogv:(int)arg1 format:(id)arg2 args:(char *)arg3;

@end
