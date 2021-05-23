/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSException : NSObject

{
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *reason;
@property (copy, readonly) NSDictionary *userInfo;
@property (copy, readonly) NSArray *callStackReturnAddresses;
@property (copy, readonly) NSArray *callStackSymbols;

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (_Bool)supportsSecureCoding;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (_Bool)_isUnarchived;
- (void)_markAsUnarchived;
- (_Bool)_installStackTraceKeyIfNeeded;
- (void)raise;

@end
