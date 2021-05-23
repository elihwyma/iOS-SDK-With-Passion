/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFDeleteSiriHistoryContext : NSObject <Swift>

{
    NSString *_successTitle;
    NSString *_successBody;
    NSString *_successButtonText;
    NSString *_errorTitle;
    NSString *_errorBody;
    NSString *_errorButtonText;
}

@property (copy, nonatomic, readonly) NSString *successTitle;
@property (copy, nonatomic, readonly) NSString *successBody;
@property (copy, nonatomic, readonly) NSString *successButtonText;
@property (copy, nonatomic, readonly) NSString *errorTitle;
@property (copy, nonatomic, readonly) NSString *errorBody;
@property (copy, nonatomic, readonly) NSString *errorButtonText;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithSuccessTitle:(id)arg1 successBody:(id)arg2 successButtonText:(id)arg3 errorTitle:(id)arg4 errorBody:(id)arg5 errorButtonText:(id)arg6;

@end
