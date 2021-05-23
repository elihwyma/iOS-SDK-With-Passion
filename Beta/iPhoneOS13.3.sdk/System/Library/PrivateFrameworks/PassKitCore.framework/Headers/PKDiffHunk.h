/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKDiffHunk : NSObject <Swift>

{
    NSString *_key;
    id _oldValue;
    id _newValue;
    NSString *_message;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id valueOld;
@property (retain, nonatomic) id valueNew;
@property (retain, nonatomic) NSString *message;

+ (_Bool)supportsSecureCoding;
+ (id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiffHunk:(id)arg1;

@end
