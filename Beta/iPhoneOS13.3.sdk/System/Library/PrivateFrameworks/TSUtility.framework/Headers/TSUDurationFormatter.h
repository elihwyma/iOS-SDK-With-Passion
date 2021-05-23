/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDurationFormatter : NSFormatter

{
    NSString *mFormat;
    int mCompactStyleStartUnit;
}

@property (copy, nonatomic) NSString *format;
@property (nonatomic) int compactStyleStartUnit;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)p_commonInit;

@end
