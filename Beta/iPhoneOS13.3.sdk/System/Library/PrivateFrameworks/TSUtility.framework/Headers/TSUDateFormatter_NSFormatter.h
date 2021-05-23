/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter

{
    NSString *mPreferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
}

@property (retain, nonatomic) NSString *preferredFormat;
@property (nonatomic) _Bool isDateOnly;
@property (nonatomic) _Bool isTimeOnly;

- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@end
