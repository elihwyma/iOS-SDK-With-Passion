/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <Swift>

{
    _Bool _isSuggested;
    TUHandle *_handle;
    NSString *_label;
}

@property (nonatomic, readonly) TUHandle *handle;
@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) _Bool isSuggested;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(_Bool)arg3;
- (_Bool)isEqualToLabeledHandle:(id)arg1;

@end
