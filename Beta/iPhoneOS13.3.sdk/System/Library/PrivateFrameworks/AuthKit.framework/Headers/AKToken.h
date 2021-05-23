/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface AKToken : NSObject

{
    NSDate *_expirationDate;
    NSString *_stringValue;
    NSString *_name;
}

@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic) NSString *name;

+ (id)tokenWithValue:(id)arg1 lifetime:(id)arg2;
+ (id)tokenWithBase64String:(id)arg1;

@end
