/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject

{
    _Bool _isDestructive;
    long long _type;
    NSArray *_affectedContainers;
}

@property (readonly, getter=_isError) _Bool _error;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool isDestructive;
@property (nonatomic, readonly) NSArray *affectedContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2;
+ (id)_actionForError:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (id)_encodeProtobuf;
- (id)_initWithProtobufData:(id)arg1;
- (id)_encodeProtobufData;
- (id)initWithType:(long long)arg1 destructivity:(_Bool)arg2 affectedContainers:(id)arg3;

@end
