/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface DSLogLine : NSObject

{
    _Bool _isUsable;
    NSString *_type;
    NSDate *_date;
    NSString *_exception;
    NSArray *_fields;
    NSString *_bundleID;
}

@property (retain, nonatomic) NSString *type;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) _Bool isUsable;
@property (nonatomic, readonly) NSString *exception;
@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) NSString *bundleID;

+ (id)logLinesFromArray:(id)arg1;

- (id)initWithLine:(id)arg1;
- (id)initWithLogLine:(id)arg1;
- (int)integerFromFieldAtIndex:(int)arg1;
- (id)nilableStringFromFieldAtIndex:(int)arg1;
- (long long)longLongFromFieldAtIndex:(int)arg1;
- (double)doubleFromFieldAtIndex:(int)arg1;
- (_Bool)boolFromFieldAtIndex:(int)arg1;
- (id)blankingStringFromFieldAtIndex:(int)arg1;

@end
