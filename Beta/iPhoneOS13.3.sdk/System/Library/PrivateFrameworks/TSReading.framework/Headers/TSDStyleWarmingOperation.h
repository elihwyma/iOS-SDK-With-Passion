/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSOperation.h>

@class TSKAccessController, TSSStyle;

@interface TSDStyleWarmingOperation : NSOperation

{
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}

- (void)main;
- (id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3;
- (void)warm;

@end
