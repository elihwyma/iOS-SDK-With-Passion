/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <Swift>

{
    NSMutableArray *_items;
}

@property (nonatomic, readonly) long long count;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeAllValues;
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addValuesFromHistory:(id)arg1;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;
- (id)lastValue;
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;

@end
