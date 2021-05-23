/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TSKWarning : NSObject

{
    NSString *mMessage;
    NSArray *mInfos;
    unsigned int mKind;
    int mSeverity;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *infos;
@property (nonatomic, readonly) unsigned int kind;
@property (nonatomic, readonly) int severity;

+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 infos:(id)arg3;
+ (id)warningWithMessage:(id)arg1 severity:(int)arg2;
+ (id)warningWithMessage:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;

@end
