/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface IMMockItemInfo : NSObject

{
    _Bool _outgoing;
    long long _type;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool outgoing;

+ (_Bool)supportsSecureCoding;
+ (id)defaultMockInfoArray;
+ (id)encodedMockItemInfoArray:(id)arg1;
+ (id)decodedMockItemInfoArray:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMockItemType:(long long)arg1 outgoing:(_Bool)arg2;

@end
