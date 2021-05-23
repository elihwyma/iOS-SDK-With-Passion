/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GPBAny

@property (copy, nonatomic) NSString *typeURL;
@property (copy, nonatomic) NSData *value;

+ (id)descriptor;
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
+ (id)anyWithMessage:(id)arg1 error:(id *)arg2;

- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (_Bool)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (id)initWithMessage:(id)arg1 error:(id *)arg2;
- (_Bool)packWithMessage:(id)arg1 error:(id *)arg2;
- (id)unpackMessageClass:(Class)arg1 error:(id *)arg2;

@end
