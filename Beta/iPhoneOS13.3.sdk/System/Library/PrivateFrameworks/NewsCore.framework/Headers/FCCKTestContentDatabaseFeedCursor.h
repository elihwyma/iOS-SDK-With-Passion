/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSNumber;

@interface FCCKTestContentDatabaseFeedCursor : NSObject <Swift>

{
    NSNumber *_order;
    NSNumber *_subOrder;
}

@property (copy, nonatomic) NSNumber *order;
@property (copy, nonatomic) NSNumber *subOrder;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
