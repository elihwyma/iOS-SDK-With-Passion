/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject

{
    NSString *_secureHeader;
    NSString *_secureContent;
    NSString *_secureFormattedContent;
    NSString *_input;
    NSString *_truncationSentinel;
}

@property (nonatomic, readonly) NSString *secureHeader;
@property (nonatomic, readonly) NSString *secureContent;
@property (nonatomic, readonly) NSString *secureFormattedContent;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) NSString *truncationSentinel;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5;

@end
