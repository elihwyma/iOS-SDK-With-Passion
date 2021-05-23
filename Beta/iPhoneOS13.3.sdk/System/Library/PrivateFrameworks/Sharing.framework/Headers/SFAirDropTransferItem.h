/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject

{
    _Bool _isFile;
    NSString *_type;
    NSString *_subtype;
    long long _count;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *subtype;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) _Bool isFile;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementCount;
- (id)initWithType:(id)arg1 isFile:(_Bool)arg2;
- (id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(_Bool)arg3;

@end
