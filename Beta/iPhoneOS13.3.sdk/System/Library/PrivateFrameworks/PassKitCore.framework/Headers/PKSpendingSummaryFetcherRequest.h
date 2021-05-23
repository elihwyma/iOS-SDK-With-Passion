/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject

{
    _Bool _withLastChange;
    NSDate *_startDate;
    unsigned long long _type;
}

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) _Bool withLastChange;
@property (nonatomic) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
