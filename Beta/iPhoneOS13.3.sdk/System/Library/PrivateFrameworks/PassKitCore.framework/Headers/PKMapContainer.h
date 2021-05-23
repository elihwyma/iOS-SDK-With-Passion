/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <Swift>

{
    NSMutableDictionary *_recipientMap;
    NSMutableDictionary *_scoreMap;
    long long _version;
}

@property (copy, nonatomic, readonly) NSMutableDictionary *recipientMap;
@property (copy, nonatomic, readonly) NSMutableDictionary *scoreMap;
@property (nonatomic, readonly) long long version;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithContainer:(id)arg1;

@end
