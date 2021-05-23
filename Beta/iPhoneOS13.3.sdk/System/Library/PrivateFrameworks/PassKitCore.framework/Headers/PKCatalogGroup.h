/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <Swift>

{
    _Bool _isUbiquitous;
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (nonatomic) _Bool isUbiquitous;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToGroup:(id)arg1;

@end
