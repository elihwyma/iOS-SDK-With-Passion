/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface _ICValueHistoryItem : NSObject <Swift>

{
    unsigned long long _timestamp;
    id _value;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) id value;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2;

@end
