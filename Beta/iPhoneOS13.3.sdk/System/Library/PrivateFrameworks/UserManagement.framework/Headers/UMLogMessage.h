/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UMLogMessage : NSObject

{
    NSMutableArray *_publicStrings;
    NSMutableArray *_privateStrings;
}

@property (retain, nonatomic) NSMutableArray *publicStrings;
@property (retain, nonatomic) NSMutableArray *privateStrings;
@property (nonatomic, readonly) NSString *publicString;
@property (nonatomic, readonly) NSString *privateString;

+ (id)messageWithPublicFormat:(id)arg1;
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithPublicFormat:(id)arg1 arguments:(char *)arg2;
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(char *)arg2;
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (id)messageWithPrivateFormat:(id)arg1;
+ (id)messageWithUser:(id)arg1;
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1;
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;

- (id)init;
- (void)addPrivateFormat:(id)arg1;
- (void)addPublicFormat:(id)arg1;
- (id)_stringForArray:(id)arg1;

@end
