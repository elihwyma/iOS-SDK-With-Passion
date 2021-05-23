/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUWarning : NSObject

{
    long long _kind;
    NSString *_message;
    NSString *_detailMessage;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) long long severity;
@property (nonatomic, readonly) NSString *message;
@property (copy, nonatomic) NSString *detailMessage;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObject:(id)arg2;
+ (id)warningWithKind:(long long)arg1 message:(id)arg2;
+ (id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKind:(long long)arg1 message:(id)arg2;
- (void)setAffectedObjects:(id)arg1;
- (id)affectedObjects;
- (void)addAffectedObjects:(id)arg1;
- (_Bool)isFontWarning;

@end
